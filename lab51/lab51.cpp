//Leslie Crispin 
//4-4-17
/*probram with pointers with comments to show that I 
understand what it's doing and decribe what errors it has */

/*Take the following code and comment it to demonstrate that you understand what it is doing.  
It has some errors, you should describe these.*/
#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0; // the  cout is asking for 10 letters of less so it need to be that size 
    char * name = new char[]; //array doesn't have a size and this is also a pointer

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;

    char * head  = name; // initializes pointer head 
    char * tail = name; // initializes pointer tail 
    nameLength = strlen(*name); // taking pointer name and using strlen, but it's an error since there is no use for *, so there is a need to drop it 

    cout << "Your word is " << firststr << endl;  // firststr is not declare so it better to use name 

    if (nameLength<10)   //if nameLength is less than  10 
    {
         while (*head != '\0')  //while pointer head does not equal to null
         {
                cout << *head; // pointer head prints out whats in name memory location 
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; // if too big a warning is outputed
     }

     cout << endl;

     tail = &name[strlen(name) - 1]; //points back to the memory location of and 

     if (nameLength < 10) //if nameLength is less than  10 
     {
          while (tail != name)
          {
                 cout << *tail;  // print out what ever is in the memory location tail which would be name
                 tail--;
          }
     }
     cout << endl;

     head = name;  // head is now equal to whatever is name
     tail = &name[strlen(name) - 1]; // initializes pointer tail, that points to the memory location of name using a cstring type.  

     head++;
     tail--;

     if (*head == *tail)// if whatever memory located in pointer head is equal to whatever is located in pointer tail
     {
         cout << "It is an palindrome!" << endl;// this out puts 
     }
     else
     {
         cout << "It is not an palindrome" << endl; // if not equal this prints out
     }

     return 0; 
}