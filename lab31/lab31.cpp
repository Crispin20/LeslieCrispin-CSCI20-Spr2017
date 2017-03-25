#include <iostream>
using namespace std;




int main(){
  
  
    char deviceChoice;
    cout << "What kind of device do you want?  A) DumbPhone, B) Smart Phone, C) Tablet D) More than one kind" << endl;
    cin >> deviceChoice;
  

   
    if ( deviceChoice == ('A' || 'a')){ //device: dumb phone
      int dumbPhone = 0; //price 
      int deviceAmount = 0;
      cout << "How many do you want?" << endl;
      cin >> deviceAmount;
      
      int deviceTotal = 0;
      deviceTotal = deviceAmount * dumbPhone;
      cout << "Price for dumbphone(s) is " << deviceAmount;
      
        if (deviceAmount <= 2) {
        int FamilyPlan = 3;
        int familyTotal = 0;
        
        familyTotal = deviceAmount * 3; 
        cout << "Your familyplan discount for " << familyTotal << " dumbPhones is $" << familyTotal;
        
        }
        
        else {
          cout << "No need for a Family Plan " << endl;
        }
        
   }
    
    else if (deviceChoice == ('B' || 'b' )){ // smartphone
        int smartPhone = 5; //price 
        int deviceAmount = 0;
        cout << "How many do you want?" << endl;
        cin >> deviceAmount;
      
       int deviceTotal = 0;
       deviceTotal = deviceAmount * smartPhone;
       cout << "Price for Smart Phone(s) is $" << deviceTotal;
      
        if (deviceAmount <= 2) {
        int FamilyPlan = 3;
        int familyTotal = 0;
        familyTotal = deviceAmount * 3; 
        cout << "Your familyplan discount for" << familyTotal;
        }
        
        else {
          cout << "No need for a Family Plan " << endl;
        }
        
   }
     
     
      else if (deviceChoice == ('C' || 'c' )){ // smartphone
        int tablet = 10; //price 
        int deviceAmount = 0;
       cout << "How many do you want?" << endl;
       cin >> deviceAmount;
      
        int deviceTotal = 0;
        deviceTotal = deviceAmount * tablet;
        cout << "Device charge for dumb phone(s) is : $" << deviceAmount << endl;
      
           if (deviceAmount <= 2) {
              int FamilyPlan = 3;
              int familyTotal = 0;
        
              familyTotal = deviceAmount * 3; 
              cout << "Your familyplan discount for " <<deviceTotal << " dumbPhones is $" << familyTotal << endl;
        
              }
        
            else {
             cout << "No need for a Family Plan " << endl;
            }
        
       }
    
        
        
        
     else if (deviceChoice == ('D' || 'd')){
       
       int tablet = 10; //price 
       int smartPhone = 3;
       int dumbPhone = 0;
       int totalSPhone = 0;
       int totalDPhone = 0;
       int totalTablet = 0;
       int deviceTotal = 0;
       int deviceAmount = 0;
       
        cout << "How many do you want? Smartphones: ";
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
         cout << "No need for a Family Plan " << endl;
       }
       
     }
     
     else{
       
       cout << "No device selected" << endl;
     }
     
     
 
       int planChoice;
       cout << "How much data are you planing to use?" << endl;
       cin >> planChoice;
       
     if (planChoice <= 0) {
         
        char dataChoice;
        cout << "What type of plan would you like?"  << endl << "A) unlimited data, " << endl << "or B) pay per data charge, $5 for the first GB of data and $0.75 after that";
        cin >> dataChoice;
        
            if( dataChoice == ('A' || 'a')) {
            
             cout << "Your plan is Unlimited data for data up to 10GB and $1.50 after that and unlimited talk and text. For $30" << endl;
            
            }
            
            else if ( dataChoice == ('B' || 'b') ){
                
                cout << "Your plan is Pay per Data, $5 for the frist GB of data and $0.75 for each GB after that up to 10GB and $1.50 at to 15GB";
            }
            else {
                cout << "No type selected." << endl;
            }
           
        }
        else { 
         cout << "Your plan should be a monthly charge of $30." << endl;
      }
    
    char corpMember;
    cout << "Are you a Corporate Member? A) yes or B) No"  << endl;
    cin >> corpMember;
    if ( corpMember == ('a' || 'A')){
        
        cout << "you get a 10 percent discount" << endl;
    }
    else if (corpMember == ('B' || 'b')){
        cout << "You dont get a discount." <<endl;
    }
    else {
        cout << "None Selected" <<endl;
        
    }
     return 0;
}