//Leslie Crispin
//4-20-17
/*Program that the user inserts the first and last name that it determines wheather the name has too 
many characters, if it's last and first name is the same.  and then it prints out the frist letter in the
first name and the the full last name. The full name and the two frist letters in the frist name.  
These all will be password suggestions.   
*/
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string.h>
using namespace std;


int main(){
   const int size1 = 11;
   const int size2 = 21;
   char size3[20];
    char firstName[size1];
    char lastName[size2];
    
    cout << "Insert frist name (less than 10 characters): ";
    cin >> firstName;
    
    cout << "Insert last name (less than 20 characters): ";
    cin >> lastName;

    
if( (strlen(firstName) > size1) || (strlen(lastName) > size2)){
    cout << "Input is more than allowed ";
    
}

else if(strcmp(firstName, lastName)  == 0){
cout  << endl << "First name and last are the same. There could be problems." << endl;

cout << endl << strncpy(size3, firstName, 1) << lastName << endl;
cout << firstName << lastName << endl;
size3[5] = '\0';
cout << strncpy(size3, firstName, 2) << lastName << endl;
    
}

else{
 
 

cout << endl << strncpy(size3, firstName, 1) << lastName << endl;
cout << firstName << lastName << endl;

size3[5] = '\0';
cout << strncpy(size3, firstName, 2) << lastName << endl;
}
    return 0;
}