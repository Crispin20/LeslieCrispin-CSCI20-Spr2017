#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
   ifstream inFS; 
   
  inFS.open("studentanswers.txt");
  
   if(inFS.is_open() ){
      
       string questiontotal[21];  //CHECK IN CASE MISS COUNT
        
        for(int i; i < 21; i++ ){
            studentanswers >> questiontotal[i];
            
        }
       
   }
   
    
    
    
    return 0;
}