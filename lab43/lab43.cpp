//Leslie Crispin
//4-18-17
/***
 * 
 * main function ask prints out the invintory list and it and ask the user what they want to purchase.
 * 
have a class name items
    - have a in side the class
**/ 
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>

class Inventory{
    public:
     void GetITEMS_ARRAYS(string ITEMS_NAME[], double ITEMS_PRICE[]){ 
        string ITEMS_NAME[10] = {"crayons", "linepaper", "marker", "pencil", "eraser", "ruler", "notebook", "highlighters", "pens", "books"};
        double ITEMS_PRICE[10] = {3.50, 7.75, 4.50, 2.50, 1.50, 1.30, 4.50, 4.75, 3.50, 12.75};
  
    }
    
    public:

};





int main(){
const int NumOfItems = 10;
string ITEMS_NAME[NumOfItems];
double ITEMS_PRICE[NumOfItems];

getITEMS_ARRAYS(ITEMS_NAME, ITEMS_PRICE);

int i = 0;
 int num = 0;
 int Sum = 0;

for(int i; 0 < 10; i++){


    cout << "0)  Item: " << ITEMS_NAME(0) << endl 
     << "1)  Item: " << ITEMS_NAME(1) << endl
     << "2)  Item: " << ITEMS_NAME(2)<< endl
     << "3)  Item: " << ITEMS_NAME(3) << endl
     << "4)  Item: " << ITEMS_NAME(4) << endl
     << "5)  Item: " << ITEMS_NAME(5) << endl
     << "6)  Item: " << ITEMS_NAME(6) << endl
     << "7)  Item: " << ITEMS_NAME(7) << endl
     << "8)  Item: " << ITEMS_NAME(8) << endl
     << "9)  Item: " << ITEMS_NAME(9) << endl;
} 

cout << "Which do you want to purchase?  Enter the number" << endl;
cin >> num;
    
cout << ITEMS_NAME[num] << " cost" << fixed << setprecision(2) << ITEMS_PRICE[num] << endl;

/**while (num >= 0) {             
               // add in to the sum
                   sum = sum + num;
                //
               cin >> num;
        } ***/


    return 0;
    
}
    