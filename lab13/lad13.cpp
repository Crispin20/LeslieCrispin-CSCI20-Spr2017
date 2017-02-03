 //leslie Crispin 
 //2-2-17
 
  #include <iostream> 
  using namespace std;
  
  int main (){
    int futureYears = 0;
    cout << "Enter a number of years in the future to estimate the population of the United States: ";
    cin >> futureYears;
    
    int currentPop = 32447297;
    int loses = (11 + 29); // seconds 2 people that either died or move out
    int gain = (11 + 15);
    
    int secYears = 365 * 86400;  //second per year
    
    int yearLost = secYears / loses; // people that are lost in one year 
    int yearGain = secYears / gain; // people that are gain in one year 
    
    int totalLost = 0;
        totalLost = futureYears * yearLost;
        
    int totalGain = 0;
        totalGain = futureYears * yearGain; 
    
    int futurePop= 0;
        futurePop = (currentPop - totalLost) + totalGain;
    
    cout << "In " << futureYears << " years the United States population will be " << futurePop << ".";
      
      
      
    return 0;
  }