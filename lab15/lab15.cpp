#include <iostream>
#include <string>

using namespace std;

    int main(){
    
    string userVerb;
        userVerb = "run";
    string verbEndIng;
    
    string pluralNoun;
    string personsName;
    string userAdjective;
    string userNoun;
    string userNumber;
    string userColor;
    string partOfBody;
    string typeOf_Food; 
    
        cout << "Hey lets do a madLips!  This one is called the 89th Annual Awards.  First enter the a verd: " << endl;
        getline (cin, userVerb);
        
        cout << "Enter a verb ending in a ing: " << endl;
        getline(cin, verbEndIng);
        
        cout << "Enter a person's name: " << endl;
        getline (cin, personsName);
        
        cout << "Enter a adjective: " << endl;
        getline (cin, userAdjective);
        
        cout << "Enter a noun: " << endl;
        getline (cin, userNoun);
        
        cout << "Enter a plural noun: " << endl;
        getline (cin, pluralNoun);
        
        cout << "Enter a number: " << endl;
        getline (cin, userNumber);
        
        cout << "Enter a color: " << endl;
        getline (cin, userColor);
        
        cout << "Enter a part of the body: " << endl;
        getline (cin, partOfBody);
        
        cout << "Enter a type of food: " << endl;
        getline (cin, typeOf_Food);
        
        cout << "It's the awards show you've been " << verbEndIng << " for all year: " << " the " << personsName << "'s!",
        cout << " There are many " << userAdjective << " reasons to watch this years's " << userNoun << " " << personsName;
        cout << " is hosting so you're guaranteed at least " << userNumber << " good laughs.";
        cout << " You invested " << userNumber << " Dollars to watch all the " << pluralNoun << " nominated for Best Picture. ";
        cout << "That's more money you could have spent on a brand-new " << userNoun << "! To admire all the " << userAdjective << " dresses on the ";
        cout << userColor << " carpet and " << userVerb << " at all the fashion disasters! You need an excuse to make " << typeOf_Food << " pie for your annual ";
        cout << personsName << "'s themed party. You might lose your " << partOfBody << " if you watch one more rerun of Chopped and Diners, " << pluralNoun;
        cout << ", and drives on " << userNoun << " network." << endl; 
        
       
    return 0;
    }