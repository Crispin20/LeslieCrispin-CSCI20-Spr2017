 //leslie Crispin 
 //lab 1.3: Intergers
 //2-2-17
 
  #include <iostream> 
  using namespace std;
  
  int main (){
    int futureYears = 0;
    cout << "Enter a number of years in the future to estimate the population of the United States: ";
    cin >> futureYears;
    
    int currentPop = 32447297;
    int loses = 11;
    int migrant= 29; // seconds 2 people that either died or move out
    int gain = 8;
 
    int secondsInHr= 0;
        secondsInHr = 60 * 60;
    int secondsInDay = 0;
        secondsInDay = 24 * secondsInHr;
    
    int secYears = 0;
        secYears = 365 * secondsInDay;  //second per year  
    
    int yearLost = secYears / loses; // people that are lost in one year 
    int yearMigrant = secYears / migrant;
    int yearGain = secYears / gain; // people that are gain in one year 
   
    
    int totalLost = 0;
        totalLost = futureYears * (yearLost + yearMigrant);
        
    int totalGain = 0;
        totalGain = futureYears * yearGain; 
    
    int futurePop= 0;
        futurePop = (currentPop - totalLost) + totalGain;
    
    cout << "In " << futureYears << " years the United States population will be " << futurePop << ".";
      
      
      
    return 0;
  }