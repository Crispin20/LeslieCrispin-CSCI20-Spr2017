#include <iostream>
using namespace std;

int main(){
    
    string userName;
    int fillStatus = 0; //if there married or single 
    int grossWage = 0; // income
    int withHeld = 0.0; 
    double totalTax= 0.0;
    double ajustedGross = 0.0;
    
    cout << "Enter Name: " << endl;
    getline (cin, userName);
    cout << "Enter Filling Status, 1) single, 2) married: " << endl;
    cin >> fillStatus;
    cout << "Enter Wage: "<< endl;
    cin >> grossWage; 
    cout << "Enter Amount Withheld: " <<endl;
    cin >> withHeld;
    
    
    switch (fillStatus){ // cases is if they are married or not 
        
        
        case 1: //single
            ajustedGross = grossWage - 3900;
       
            if((ajustedGross > 0) & (ajustedGross <= 8925)){
                double total= 0.0;
                total = ajustedGross * .10;
                totalTax = ajustedGross - total;
                    
                    if(totalTax == 0){
                        cout << "No taxes owed." << endl;
                        }
                    else{
                     totalTax = totalTax;   
                        }
            
            }
            else if((ajustedGross >= 8926) & (ajustedGross <= 36250)){
               double total = 0.0;
               total = ajustedGross * .15;
               totalTax = 892.50 + (ajustedGross - total);
               
                    if(totalTax == 0){
                        cout << "No taxes owed." << endl;
                        }
                    else{
                        totalTax = totalTax;   
                        }
            }
            
            else if ((ajustedGross >= 36251) & (ajustedGross <= 87850)){
                double total = 0.0;
                total = ajustedGross * .25;
                totalTax = 4991.25 + (ajustedGross - total);
                
                    if(totalTax == 0){
                        cout << "No taxes owed." << endl;
                        }
                    else{
                        totalTax = totalTax;   
                        }
                    
            }
            else if(ajustedGross >=  87851){
                double total = 0.0;
                total = ajustedGross * .28;
                totalTax = 17891.25 + (ajustedGross - total);
                
                    if(totalTax == 0){
                        cout << "No taxes owed." << endl;
                        }
                    else{
                        totalTax = totalTax;   
                        }
            }
            else {
            cout << "Not accepted "<< endl;
            }

        break;
        
        case 2:
            
            ajustedGross = grossWage - (3900 * 2);
            
                if ((ajustedGross > 0) & (ajustedGross <= 17850)) {
                     double total = 0.0;
                     total = ajustedGross * .10;
                     totalTax = ajustedGross - total;
                     
                       if(totalTax == 0){
                        cout << "No taxes owed." << endl;
                        }
                        else{
                        totalTax = totalTax;   
                        }
                }
                else if ((ajustedGross >= 17851) & (ajustedGross <= 72500)){
                     double total = 0.0;
                     total = ajustedGross * .15;
                     totalTax = 1785 + (ajustedGross - total);
                     
                        if(totalTax == 0){
                        cout << "No taxes owed." << endl;
                        }
                    else{
                        totalTax = totalTax;   
                        }
                }
                else if((ajustedGross >= 72501) & (72501 <= ajustedGross)){
                     double total = 0.0;
                     total = ajustedGross * .28;
                     totalTax = 9982.50 + (ajustedGross - total);
                     
                        if(totalTax == 0){
                        cout << "No taxes owed." << endl;
                        }
                        else{
                        totalTax = totalTax;   
                        }
                }
                else{
                    cout << "Not accepted";
                }
        
        break;
        
        default:
            cout << "None Selected" << endl;
    }
    
 
    cout << endl << endl << "Name: "<< userName<< endl << "Total Gross Adjusted Income: "<< ajustedGross << endl;
    cout << "Total Tax Owed: "<< totalTax << endl;
    
     double refundTotal = 0.0;
        
        if (totalTax < withHeld){
            refundTotal = totalTax - withHeld; 
            cout << userName << " is entitled to a Refund of $" << refundTotal << endl;
            
        }
        else if(totalTax > withHeld){
            cout << "More taxes are own " << endl;
        }
        else{
            cout << "Invalid";
        }
    
    
    return 0;
}