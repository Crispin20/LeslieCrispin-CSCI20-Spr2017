// Leslie Crispin 
// 2-21-17
// lab 2.1: Calling Functions.
//Using functions, the program will out put the new and old wind chill, using the users input of temperature and wind speed.

#include <iostream>
#include<cmath>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main() {
    
    const char sperator = ' ';
    double tempF = 0.0; // the temperature
    double windSpeed = 0.0; // velocity
   double oldStyleWindChill = 0.0;
    double newOldStylewindChil = 0.0;
    double differenceOfTwo = 0.0; // the difference between old and new wind chill
    
    cout << "Enter temperature: ";
    cin >> tempF;
    
        cout <<  "Enter Windspeed: ";
    cin >> windSpeed;
    cout << endl;
    
        oldStyleWindChill = 0.081 * (3.71 * (sqrt(windSpeed)) + 5.81 - (0.25 * windSpeed)) * (tempF- 91.4) + 91.4;
    
        newOldStylewindChil = 35.74 + 0.6215 * tempF - 35.75 * (pow(windSpeed, 0.16)) + 0.4275 * tempF * (pow(windSpeed, 0.16)); 
    
        differenceOfTwo = abs(newOldStylewindChil - oldStyleWindChill);
        
   cout << setw(7) << "windspeed " << setw(20) << "Old Wind Chill" << setw(20) << " New Wind Chill" << setw(20) << "Difference of " << endl;
   cout << setw(79)<< "Old and New Wind Chill " << endl << endl;
   cout << setw(9) << windSpeed << setw(14) << oldStyleWindChill  << setw(19) << newOldStylewindChil << setw(21)<< differenceOfTwo << endl;
    
    return 0;
}