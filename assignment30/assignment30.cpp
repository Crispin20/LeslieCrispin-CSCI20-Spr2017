#include <iostream>
//Leslie Crispin 
// 4-6-17
//


using namespace std;
#include<cstdlib>
#include<ctime>

int main(){
    int i = 0;
    int numRounds; // the choose of how many round to play 
    cout << "Lets play Rock, Paper, Scissors, Lizzard, Spock" << endl << "Out of how many rounds? 3, 5, or 7" << endl;
    cin >> numRounds;

    // Iterating N times using loop variable i
i = 1;
while (i <= numRounds ) {
    int userChoice = 0;
    i = i + 1;
    
    
    cout << "What do you choose:  1) Rock, 2) Paper, 3) Scissors, 4) Lizzard, 5) Spock" << endl;
    cin >> userChoice;
    

if (userChoice == 1){ // rock
int compChoice = rand() % 5 + 1; // computer roll of choice
    
    if(compChoice == 1 ){ // rock
    cout << 
    }
    else if (compChoice == 2){// paper
    }
    else if (compChoice == 3) { // scissors
    } 
    else if (compChoice == 4) { // lizard
    }
    else if (compChoice == 5) { // spock 
    }
    else{
      cout << "unvalid answer";
        
    }
}
 

else if(userChoice == 2){ // paper
}
  else if(userChoice == 3){}  // scissors 
  else if(userChoice == 4){} // lizzard
  else if (userChoice == 5){} // spock
  else{
      cout << "unvalid answer";
 }
    
    
    
    
    return 0;
}
