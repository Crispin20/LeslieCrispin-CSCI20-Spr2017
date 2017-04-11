#include <iostream>
//Leslie Crispin 
// 4-6-17
// Game of rock paper scissors that user plays against the computer. the score of the user is scored at the end 


using namespace std;
#include<cstdlib>
#include<ctime>

class DetermineWinner{   // classes determined the score
    public:
    void SetRock(int compChoice, int sum);
    void SetPaper(int compChoice, int sum);
    void SetScissors(int compChoice, int sum);
    void SetLizzard(int compChoice, int sum);
    void SetSpock(int compChoice, int sum);
    
    // have get return 
    int GetRock() const;
    int GetPaper() const;
    int GetScissors() const;
    int GetLizzard() const;
    int GetSpock() const;
    DetermineWinner(); //default constructor
    DetermineWinner(int sum);
    
    int Points() const;

    private:
    int score_ = 0; // score
    
};

 DetermineWinner::DetermineWinner(){       //defult constructor
        score_ = 0;
        return;
    }

DetermineWinner::DetermineWinner(int score_){ 
        score_ = score_; 
        return;
    }

void DetermineWinner::SetRock(int compChoice, int sum){ // rock 
     int num  = 0; // point
    
    if(compChoice == 1){ // its a tie
        num = 0;
    }
    else if(compChoice == 2){ // paper  covers rock
        num = 0;
    }
    else if(compChoice == 3){ // Rock crushes scissors 
        num = 1;
    }
    else if( compChoice == 4){ // rock covers lizzard
        num = 1;
    }
    else{ //spock vaporizes rock
      num = 0; 
    }
      score_ = num + sum;
 }

void DetermineWinner::SetPaper(int compChoice, int sum ){ //paper
     int num = 0;
     
    if(compChoice == 1){//Paper Covers Rock
        num = 1;
    }
    else if (compChoice == 2){ //It's a tie!
        num = 0;
    }
    else if (compChoice ==3){ //Scissors cuts Paper
        num = 0;
    }
    else if (compChoice == 4){ //Lizzard eats paper
        num = 0;
    }
    else{ // Paper disproves Spock
        num = 1;
    }
    score_ = num + sum; 
 }
 
void DetermineWinner::SetScissors(int compChoice, int sum){ // scissors
    int num = 0;
          
    if (compChoice == 1){ //Rock crushes Scissors
    num = 0;
    }
    else if(compChoice == 2){ //Scissors cuts Paper 
    num = 1;
    }
    else if(compChoice == 3){ //It's a tie!
    num = 0;
    }
    else if(compChoice == 4){ //Scissors decapitates Lizzard
    num = 1;
    }
    else{//Spock smashes Scissors
    num = 1;
    }
    score_ = sum +  num;
}
void DetermineWinner::SetLizzard(int compChoice, int sum){// lizzard
    int num = 0;
    
    if(compChoice == 1){//Rock crushes Lizard
    num = 0;
    }
    else if(compChoice == 2){//Lizard eats Paper
    num = 1;
    }
    else if(compChoice == 3){//Scissors decapitates Lizzard
    num = 0;
    }
    else if(compChoice == 4){//It's a tie!
    num = 0;
    }
    else {//Lizzard poisons Spock
    num = 1;
    }
    score_ = sum +  num;
}

void DetermineWinner::SetSpock(int compChoice, int sum){ //spock
    int num = 0;
    
    if(compChoice == 1){ //Spock vaportizes Rock
    num = 1;
    }
    else if (compChoice == 2){ //Paper disproves Spock
    num = 0;
    }
    else  if (compChoice == 3){ //Spock smashes Scissors
    num = 1;
    }
    else if(compChoice ==4){ //Lizard poisons Spock
    num =0;
    }
    else{ //It's a tie!
    num = 0;
    }
    score_ = sum +  num;
}


int DetermineWinner::GetRock() const {
        return score_;
    }
    
int DetermineWinner::GetPaper() const {
        return score_;
}

int DetermineWinner::GetScissors() const{
        return score_;
}

int DetermineWinner::GetLizzard() const{
        return score_;
}
int DetermineWinner::GetSpock() const {
        return score_;
}

int DetermineWinner::Points() const {
        
        return score_;
    }

int main(){
    DetermineWinner winner;
    
    int i = 0;
    int sum = 0;
    int num = 0;
    int numRounds; // they choose how many round to play 
    cout << "Lets play Rock, Paper, Scissors, Lizzard, Spock" << endl << "Out of how many rounds? 3, 5, or 7" << endl ;
    cin >> numRounds;
    

   
i = 1; // Iterating N times using loop variable i
while (i <= numRounds) {
i = i + 1;



sum = winner.Points();  //score is turns into the sum
int userChoice = 0;
cout << endl <<  "What do you choose:  1) Rock, 2) Paper, 3) Scissors, 4) Lizzard, 5) Spock" << endl;
    cin >> userChoice;
    
    if (userChoice == 1){ // rock
        int compChoice = rand() % 5 + 1; // computer roll of choice
        
        switch (compChoice){
            case 1: // rock 
            cout << "Computer picked rock" << endl << "It's a tie!" << endl;
            break;
            
            case 2:// paper
            cout <<"Computer picked paper" << endl << "Paper Covers Rock" << endl;
            break;
            
            case 3://scissors
            cout << "Computer picked scissors" << endl << "Rock crushes Scissors" << endl;
            break;
            
            case 4://lizard
            cout << "Computer picked lizzard" << endl << "Rock covers Lizzard" <<endl;
            break;
            
            case 5://spock
            cout  << "Computer picked spock" << endl << "Spock vaporizes rock" << endl;
            break;
      
        }
        winner.SetRock(compChoice, sum);
    }

    else if(userChoice == 2){ // paper
    int compChoice = rand() % 5 + 1; // computer roll of choice
    
    switch (compChoice){
            case 1: // rock 
            cout << "Computer picked rock" << endl << "Paper Covers Rock" << endl;
            break;
            
            case 2:// paper
            cout <<"Computer picked paper" << endl << "It's a tie!" << endl;
            break;
            
            case 3://scissors
            cout << "Computer picked scissors" << endl << "Scissors cuts Paper" << endl;
            break;
            
            case 4://lizard
            cout << "Computer picked lizzard" << endl << "Lizzard eats paper" <<endl;
            break;
            
            case 5://spock
            cout  << "Computer picked spock" << endl << "Paper disproves Spock" << endl;
            break;
        }
        winner.SetPaper(compChoice, sum);
}

    else if(userChoice == 3){  // scissors 
    int compChoice = rand() % 5 + 1; // computer roll of choice
    
    switch (compChoice){
            case 1: // rock 
            cout << "Computer picked rock" << endl << "Rock crushes Scissors" << endl;
            break;
            
            case 2:// paper
            cout <<"Computer picked paper" << endl << "Scissors cuts Paper" << endl;
            break;
            
            case 3://scissors
            cout << "Computer picked scissors" << endl << "It's a tie!" << endl;
            break;
            
            case 4://lizard
            cout << "Computer picked lizzard" << endl << "Scissors decapitates Lizzard" <<endl;
            break;
            
            case 5://spock
            cout  << "Computer picked spock" << endl << "Spock smashes Scissors" << endl;
            break;
        }
        winner.SetScissors(compChoice, sum);
  }
  
    else if(userChoice == 4){ // lizzard
    int compChoice = rand() % 5 + 1; // computer roll of choice
    
    switch (compChoice){
            case 1: // rock 
            cout << "Computer picked rock" << endl << "Rock crushes Lizard" << endl;
            break;
            
            case 2:// paper
            cout <<"Computer picked paper" << endl << "Lizard eats Paper" << endl;
            break;
            
            case 3://scissors
            cout << "Computer picked scissors" << endl << "Scissors decapitates Lizzard" << endl;
            break;
            
            case 4://lizard
            cout << "Computer picked lizzard" << endl << "It's a tie!" <<endl;
            break;
            
            case 5://spock
            cout  << "Computer picked spock" << endl << "Lizzard poisons Spock" << endl;
            break;
        }
        winner.SetLizzard(compChoice, sum);
  }
  
    else if (userChoice == 5){ // spock
    int compChoice = rand() % 5 + 1; // computer roll of choice
    
    switch (compChoice){
            case 1: // rock 
            cout << "Computer picked rock" << endl << "Spock vaportizes Rock" << endl;
            break;
            
            case 2:// paper
            cout <<"Computer picked paper" << endl << "Paper disproves Spock" << endl;
            break;
            
            case 3://scissors
            cout << "Computer picked scissors" << endl << "Spock smashes Scissors" << endl;
            break;
            
            case 4://lizard
            cout << "Computer picked lizzard" << endl << "Lizard poisons Spock" <<endl;
            break;
            
            case 5://spock
            cout  << "Computer picked spock" << endl << "It's a tie!" << endl;
            break;
        }
        winner.SetSpock(compChoice, sum);
  } 
  
    else{
    //cout << "unvalid answer";
 }

}   
     cout << endl <<  "Your score is: " <<  winner.Points();
    
    return 0;
}
