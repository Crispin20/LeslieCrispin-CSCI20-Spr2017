#include <iostream>
using namespace std;

int main(){
    char deviceChoice;
    cout << "What kind of device do you want?  A) DumbPhone, B) Smart Phone, C) Tablet D) More than one kind" << endl;
    cin >> deviceChoice; 
    
    if (deviceChoice == 'A'){
        int dumbPhone = 0; //price 
        int deviceAmount = 0;
        cout << "How many do you want? ";
        cin >> deviceAmount;
      
        int deviceTotal = 0;
        deviceTotal = deviceAmount * dumbPhone;
        cout << "Price for dumbphone(s) is $" << deviceTotal << endl;
    
            if(deviceAmount >= 2){
            cout << "Your familyplan discount is $" << deviceAmount * 3 << endl;
                
            }
            else {
                cout << "Familyplan not needed." << endl;
            }
        
    }
    else if (deviceChoice == 'B'){
        int smartPhone = 5; //price 
        int deviceAmount = 0;
        cout << "How many do you want?" << endl;
        cin >> deviceAmount;
      
        int deviceTotal = 0;
        deviceTotal = deviceAmount * smartPhone;
        cout << "Price for smartPhone(s) is $" << deviceTotal << endl;
    
            if(deviceAmount >= 2){
            cout << "Your familyplan discount is $" << deviceAmount * 3 << endl;
                
            }
            else {
                cout << "Familyplan not needed." << endl;
            }
        
    }
    else if(deviceChoice == 'C'){ //tablet
        int tablet = 10; //price 
        int deviceAmount = 0;
        
        cout << "How many do you want? " << endl;
        cin >> deviceAmount;
      
        int deviceTotal = 0;
        deviceTotal = deviceAmount * tablet;
        cout << "Price for tablet(s) is " << deviceTotal << endl;
    
            if(deviceAmount >= 2){
            cout << "Your familyplan discount is $" << deviceAmount * 3 << endl;
                
            }
            else {
                cout << "Familyplan not needed." << endl;
            }
        
    }
    else if(deviceChoice == 'D'){
          
       int tablet = 10; //price 
       int smartPhone = 3;
       int dumbPhone = 0;
       int totalSPhone = 0;
       int totalDPhone = 0;
       int totalTablet = 0;
       int deviceTotal = 0;
       int deviceAmount = 0;
       
        cout << "How many do you want? Smartphones: " ;
        cin >> totalSPhone;
        cout << "Dumb Phone: ";
        cin >> totalDPhone;
        cout << "Tablet: ";
        cin >> totalTablet;
     
       deviceTotal = (totalTablet * tablet) + (smartPhone * totalSPhone) + (totalDPhone * dumbPhone);
       cout << "Device charge is $" << deviceTotal << endl;
      
        if ((totalSPhone + dumbPhone) <= 2) {
          int FamilyPlan = 3;
          int familyTotal = 0;
          familyTotal = (totalSPhone + dumbPhone)  * 3; 
          cout << "Your have a familyplan discount for $" << familyTotal << endl;
        }
        else {
            cout << "Famlilyplan not needed." << endl;
        }
        
    }
    else{
        cout << "No device selected.";
    }
    
    
    char planChoice;
    cout << "Are you planing to use data? Y for yes and N for No" << endl;
    cin >> planChoice;
    
    if(planChoice == 'Y'){
        char dataChoice;
        cout << "What type of plan?" << endl << "A) Unlimited Data- with unlimited talk, text, and data up to 10GB" << endl << "B) Pay per Data" << endl;
        cin >> dataChoice;
         if(dataChoice == 'A'){
            int dataUse = 0;
            cout << "How much data will you use? " << endl;
            cin >> dataUse;
            
            if( dataUse > 10){
                double overDue = 0.0;
                overDue = ((dataUse - 10) * 1.50);
                
                cout << "The price of the unlimited data is $75 and the price of data after 10GB is $" << overDue << ", totaling to $" << overDue + 75 << endl;
            }
            else{
                cout << "Price for this plan is $75" << endl;
            }
            
        }
        else if (dataChoice == 'B'){
             int dataUse = 0;
            cout << "How much data will you use? " << endl;
            cin >> dataUse;
            
           if (dataUse <= 1 ){ 
            double totalPrice = 0.0;
            totalPrice = 5; 
            cout << "Your price is $" << totalPrice << " for the first GB" << endl;
           }
           else if((dataUse <= 5) & (dataUse >= 1)) {
                double totalPrice = 0.0;
                double extraGB = .75;
                totalPrice = ((((dataUse - 1) ) * extraGB) + 5);
                cout << "The price total for the plan is $" << totalPrice << " up to $0.75 til 5GB" <<endl;
           }
           else if((dataUse <= 15) & (dataUse >= 5)){
               double totalPrice = 0.0;
                double extraGB = 1.50;
                totalPrice = ((dataUse - 1) *  1.50) + 5; 
                
                cout << "The price total for the plan is $" << totalPrice << " up to $1.50 til 15GB" <<endl;
           }
            else if(dataUse >= 15){
                double totalPrice = 0.0;
                double extraGB = 3;
                totalPrice = ((dataUse - 1) *3) +5  ; 
           }
           else{
            cout << "No plan selected"; 
         }
           
        } 
        
    }
    else if (planChoice == 'N'){
     cout << "A Monthly Charge plan of $30, for unlimted talk and text, would be a good fit.";
    }
    
    else{
        cout << "No answer selected";
    }
    
    
    
    
    char corpMember;
    cout << "Are you a Corporate Member? A) yes or B) No"  << endl;
    cin >> corpMember;
    
    if ( corpMember == 'A'){
        
        cout << "you get a 10 percent discount" << endl;
    }
    else if (corpMember == 'B' ){
        cout << "You dont get a discount." <<endl;
    }
    else {
        cout << "None Selected" <<endl;
        
    }

     return 0;
}