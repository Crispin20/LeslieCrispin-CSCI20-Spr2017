// Leslie Crispin
// 2-28-17
// lab 2.3: Function Input, This program creates two functions.  One is the RandomGenerator that swaps the two numbers that the user imputs and swaps then. Then it generates a random number and the main  prints outs the number and the numbers that the user inserted.   


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;


void RandomGenerator(int num_1Value, int num_2Value,   int& randomNum){
    
     std::swap(num_1Value, num_2Value);
     
     srand(time(0));
     randomNum = (rand() % ( num_2Value - num_1Value + 1 )) + num_2Value;
    
    
    return;
}



int main(){
     int num_1Value = 0;
     int num_2Value = 0;
      int randomNum = 0;
    
     cout << "Enter the first number: ";
    cin >> num_1Value;
    cout << "Enter the second number: ";
    cin >> num_2Value;
    
    RandomGenerator(num_1Value, num_2Value, randomNum);
    cout << "A random number between " << num_1Value << " and " << num_2Value << " is " << randomNum << endl; 
    
    
    return 0;
}