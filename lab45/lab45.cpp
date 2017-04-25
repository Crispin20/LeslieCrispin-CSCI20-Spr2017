//Leslie Crispin
//4-25-17
/*This program is responsible for creating user names for a new website you have created. 
It should accept a first name of up to 10 characters and a last name of up to 20 characters. 
It should tell the user if the name is larger than the max size.  It should also determine
if the names are the same and output a warning.  After checking these things, it should 
create three different user name options (for example: apbrowne; aprilbrowne; abrowne).*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string userName;
   string lastName;
   int    itemIndex = 0;
    
    cout << "Enter a frist name: ";
    getline(cin, userName);

    cout << "Enter a last Name: ";
    getline(cin, lastName);
    
    //It should tell the user if the name is larger than the max size
    
if((userName.length() > 10) || lastName.length() > 20){
         cout << "User Input  is over max size" << endl;
     }
else if(userName == lastName){
    cout << "User Input is the same,  may cause problems." << endl<< endl;
    
    cout << "Which one would you like: " << endl;
    userName.append(lastName);
    cout << userName << endl ;
    
    userName.resize(2);
    cout << userName << lastName << endl; 

    userName.resize(1);
    cout << userName << lastName << endl; 
    
}
else{
         
    userName.append(lastName);
    cout << userName << endl ;
    
    userName.resize(2);
    cout << userName << lastName << endl; 

    userName.resize(1);
    cout << userName << lastName << endl; 
   
     }
    
    /*do{
     userName.resize(userName.resize(userName.size()-1));
    }
    while(userName.length() > 2);
   */
    
    return 0;
}