#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>


int main(){
    int randomNum = 0;
    int userNum = 0;
    int guesses;
    srand(time(0));
    randomNum = rand() % 50 + 1;
    
    cout <<  "Guess the random number!  Enter a number: " << endl;
    cin >>userNum;
    
    
for (int i = 1; i >= guesses; i++)           
{
  
    while( randomNum != userNum ){
        
        if(userNum > randomNum){
            cout << "Too high" << endl;
            }
       else if (userNum < randomNum){
           cout << "Too Low" << endl;
            }
            
    cout << "Guess again, Enter another number: " << endl;
    cin >> userNum;
    }
    
      cout << "Just right!" << "It took you " << guesses << " guesses to get it correct." << endl;
 }
    

     
    return 0;
}