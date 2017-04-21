#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string.h>
using namespace std;


int main(){
   const int size1 = 10;
   const int size2 = 20;
    char firstName[size1];
    char lastName[size2];
    
    cout << "Insert frist name (less than 10 characters): ";
    cin >> firstName;
    
    cout << "Insert last name (less than 20 characters): ";
    cin >> lastName;
    

if(strcmp(firstName, lastName)  == 0){
    cout  << endl << "First name and last are the same. There could be problems." << endl;
}


 char size3[20];

cout << endl << strncpy(size3, firstName, 1) << lastName << endl;
cout << firstName << lastName << endl;
size3[5] = '\0';
cout << strncpy(size3, firstName, 2) << lastName << endl;
    
    return 0;
}