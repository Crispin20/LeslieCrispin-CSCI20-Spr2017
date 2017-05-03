#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std; 

int main(){
    ifstream inFS; //input file stream
    ofstream outFS;
     string name;
     double semester = 0;
     double grade1 = 0;
     double grade2 = 0;
     double grade3 = 0;
     double grade4 = 0;
     double totalUnits = 0;
     double currentGPA = 0;
     
     double average = 0; //semester GPA
     double totalPoints  = 0; 
     double overallGPA = 0; // overall GPA
     string fileName = "";  
     
     
     cout << "Enter file Name: " << endl; // open file Suzy
     getline (cin, fileName);
     
     inFS.open(fileName);
     
if(!inFS.is_open()){
        cout << "cound not open file " << fileName << endl;
        return 1;
     }
   
   do()while{}
    inFS >> name;
    inFS >> semester;
    inFS >> grade1; 
    inFS >> grade2;
    inFS >> grade3;
    inFS >> grade4;
    inFS >> totalUnits;
    inFS >> currentGPA;
    
    
    
    totalPoints = grade1 + grade2 + grade3 + grade4;
    average = ((totalPoints)/4);  //semester gpa
    
    
    overallGPA = (average + currentGPA) / 2;  //overall GPA
    
    
    outFS.open("GPA.html", ofstream::app);
    
    
    if(!outFS.is_open()){
    cout << "Could not open file GPA.html" << endl;
    return 1;
    }


    outFS << "Student: " << name <<";"<< endl;
    outFS << "Semester: " <<semester <<";"<< endl;
    outFS << "Semester " << semester << " GPA: " << average <<";"<< endl;
    outFS << "Overall GPA: " << overallGPA << endl;
    
    outFS.close();  
  inFS.close();
   return 0;
}