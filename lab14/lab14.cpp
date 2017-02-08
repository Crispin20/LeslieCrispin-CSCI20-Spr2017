//Leslie Crispin 
//lab1.4  floating point
//2-7-17




#include <iostream>

using namespace std;

    int main(){
     double moneyEnter = 0;
     int total = 0;
     
     cout << " Enter the amount of cents ";
    cin >> moneyEnter;
    
    total = moneyEnter;
    
    
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    const double percentFee = 10.9;
    cout << "you entered " << moneyEnter << endl;
    
    cout << "That is " << total / quarters << " quarters";
  
   
    
    cout << " , " << (total % quarters) / dimes << " dimes";
   
    
    cout << " , " << ((total % quarters) % dimes ) / nickels << " nickels";
  
    
    cout << " , " << (((total % quarters) % dimes ) % nickels)  << " pennies." << endl;
    
    float moneyTotal = 0; 
    moneyTotal = moneyEnter / 100.0;
    cout << "The total is $" << moneyTotal;
    
    
     double fee = 0;
       fee = moneyTotal * (percentFee / 100);
       
       double endFee = 0;
       endFee = moneyTotal - fee;
       
     cout << " After the fee it is " << endFee << ".";
      
       
      
     
      
      
   
     
    return 0;
     
 }