#include <iostream>
using namespace std;




int main(){
  
  
    char deviceChoice;
    cout << "What kind of device do you want?  A) DumbPhone, B) Smart Phone, C) Tablet D) More than one kind" << endl;
    cin >> deviceChoice;
  
    
    
    
    char corpMember;
    cout << "Are you a Corporate Member? A) yes or B) No"  << endl;
    cin >> corpMember;
    
    
   
   
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
        cout << "Device charge for dumb phone(s) is : $" << deviceAmount;
      
           if (deviceAmount <= 2) {
              int FamilyPlan = 3;
              int familyTotal = 0;
        
              familyTotal = deviceAmount * 3; 
              cout << "Your familyplan discount for " <<deviceTotal << " dumbPhones is $" << familyTotal;
        
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
       cout << "Device charge is $" << deviceTotal;
      
        if ((totalSPhone + dumbPhone) <= 2) {
          int FamilyPlan = 3;
          int familyTotal = 0;
          familyTotal = (totalSPhone + dumbPhone)  * 3; 
          cout << "Your have a familyplan discount for $" << familyTotal;
        }
       else {
         cout << "No need for a Family Plan " << endl;
       }
       
     }
     
     else{
       
       cout << "No device selected";
     }
     
     
 
       char planChoice;
       cout << "Do you want Monthly Charge(with out data), Unlimited Data or Pay-per Data?  choose A) Monthly Charge, B) unlimited or C) Pay-per Data" << endl;
       cin >> planChoice;
       
      if (planChoice == ('A' || 'a')){  //monthly charge 
         int planTotal = 0;
         int monthlyTotal = 30; 
          planTotal = DumbPhone + monthlyTotal;
       
      }
     
}