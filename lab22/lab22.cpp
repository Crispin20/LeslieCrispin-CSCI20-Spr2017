// Leslie Crispin 
// 2-23-17
// lab 2.2: writing function,  The function RandomNum, creates a random number between 1 and 100 and then outputs that number.  


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void RandomNum(){ // Function for the the random number output
    srand(time(0));
    

cout << "Your number is: " <<  rand() % 100 +1 << endl;  
    
    return; 
    
}

int main(){
    
    RandomNum(); // calls funcion for the Random number
    
    
    
    
    return 0;
}