#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>


int main(){
    int randomNum = 0;
    int userNum = 0;
    int i = 0;
    srand(time(0));
    randomNum = rand() % 50 + 1;
    
    cout <<  "Guess the random number!  Enter a number: ";
    cin >>userNum;
    
    
        
    while( randomNum != userNum ){
        
        if(userNum > randomNum){
            cout << "Too high" << endl;
            }
       else if (userNum < randomNum){
           cout << "Too Low" << endl;
            }
            
        
    cout << "Guess again, Enter another number: " << endl;
    cin >> userNum;
    
    for(i = 0; i <= 10; --i){
        
        cout << "You have " << i << " guesses left." << endl;
    }
    }
    
    cout << "Just Right" << endl;
    
     
    return 0;
}