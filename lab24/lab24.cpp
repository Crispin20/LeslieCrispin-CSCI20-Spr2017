// Leslie Crispin 
// 3-2-2017
// Lab 2.4: Function Return,  have use sumit two number the program then gets a random number and converts that number from pounds to kilograms.  It then outputs the results and convers it from kilograms to pounds.

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

using namespace std;

int RandomGenerator(int num1, int num2){ // creates a random number
      swap(num1, num2);
     int randomNum = 0;  //  scope for random number  is what follows 
     srand(time(0));
         randomNum = (rand() % ( num2 - num1 + 1 )) + num2;
    
    return randomNum;
}

double KiloToPounds(double newValue){ //Converts kilogram to pounds
    double oneKg= 0.45; // one kilogram
    double lbsToKg = 0.0; //  1 pound to kilogram 
        lbsToKg = newValue * oneKg; //scope 
     
    return lbsToKg;
}

double PoundToKilo ( double converKilo){ //converts pounds to kilogram
    double onePound = 2.2; // equivalent of one pound 
    double KgToLbs = 0.0; // kilogram to pound 
       KgToLbs = converKilo * onePound; // scope
    
    return KgToLbs;
}

int main(){
    
    int num1 = 0;
    int num2 = 0;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    double newValue = 0.0;
        newValue = RandomGenerator( num1, num2);
        
    double converKilo = 0.0;
        converKilo = KiloToPounds(newValue);
        
    cout << endl << endl << "The random number is " << newValue<< endl << newValue << " lbs converted to kilograms is " << converKilo <<" kg." << endl;
    
    double converPound = 0.0; 
        converPound = PoundToKilo(converKilo);
    
    cout << converKilo << " Kg convered to pounds is " << converPound << " lbs.";
  
    
    return 0;
}