#include <iostream> 
#include <string>
using namespace std;

struct MonsterStruct {
    
    string monsterOne_Name; 
     string  monsterTwo_Name;
    string monsterHead;
    string monsterEyes;
    string monsterEars;
    string monsterNose;
    string monsterMouth;
           };
                    
int main () {
    MonsterStruct creation;
    
   
    string monsterThree_Name;
    string monsterFour_Name;
    
    creation.monsterOne_Name= "OneMonster";
    creation.monsterHead = "Zombus";
    creation.monsterEyes = "Spritem";
    creation.monsterEars = "Vegitas";
    creation.monsterNose = "None";
    creation.monsterMouth = "Wachus";
        
    cout<< creation.monsterOne_Name << ": " <<creation.monsterHead << ", " << creation.monsterEyes << ", " << creation.monsterEars << ", " << creation.monsterNose << ", "<< creation.monsterMouth << endl;

   
    creation.monsterTwo_Name = "Johnny";
    creation.monsterHead = "Wachus";
    creation.monsterEyes = "Happy";
    creation.monsterEars = "Spritem";
    creation.monsterNose = "zombus";
    creation.monsterMouth = "Wachus";
    
    cout << creation.monsterTwo_Name << ": " << creation.monsterHead << ", " << creation.monsterEyes << ", " <<creation.monsterEars<< ", " << creation.monsterNose << ", " << creation.monsterMouth << endl;
    
    
      cout << "Now you make your monster!" << endl << "Type in third monster's name: " ;
     getline(cin, monsterThree_Name);
     
      cout << "Enter head type: ";
    getline(cin, creation.monsterHead);
     
    cout << "Enter eye type: "; 
    getline(cin, creation.monsterEyes);
    
    cout << "Enter ear type: ";
    getline(cin, creation.monsterEars);
    
    cout << "Enter nose type: ";
    getline(cin, creation.monsterNose);
    
    cout << "Enter mouth type: ";
    getline(cin, creation.monsterMouth);
    
    cout << monsterThree_Name << ": " <<  creation.monsterHead << ", " << creation.monsterEyes << ", " <<creation.monsterEars<< ", " << creation.monsterNose << ", " << creation.monsterMouth << endl;
    
    
      cout << "Type in the fourth monster's name: " ;
     getline(cin, monsterFour_Name);
     
      cout << "Enter head type: ";
    getline(cin, creation.monsterHead);
     
    cout << "Enter eye type: "; 
    getline(cin, creation.monsterEyes);
    
    cout << "Enter ear type: ";
    getline(cin, creation.monsterEars);
    
    cout << "Enter nose type: ";
    getline(cin, creation.monsterNose);
    
    cout << "Enter mouth type: ";
    getline(cin, creation.monsterMouth);
    
    cout << monsterFour_Name << ": " <<  creation.monsterHead << ", " << creation.monsterEyes << ", " <<creation.monsterEars<< ", " << creation.monsterNose << ", " << creation.monsterMouth << endl;
    
    
    
    
    
    return 0;
}