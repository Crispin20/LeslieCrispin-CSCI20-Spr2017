//Leslie Crispin
//4-15-17
/*******This program mimics an online shopping cart.  You are the proprietor of an online shop and have to keep track of inventory,
price and the user’s shopping cart.  Create a menu of at least 10 items for the user to choose from. 
Identify your starting inventory and price.  As the user purchases an item, you should remove that item from inventory
(subtract 1) and add the price to a total.  When the user is done adding items to their cart, you should output a statement
of what they have ordered and the total cost of their purchases.  Do not allow you inventory to go below 0. */

#include <iostream>
#include <string>
using namespace std;
#include <iomanip>
int main(){
int i = 0;
 int num = 0;
 int Sum = 0;

string ITEMS_NAME[] = {"crayons", "linepaper", "marker", "pencil", "eraser", "ruler", "notebook", "highlighters", "pens", "books"};
double ITEMS_PRICE[] = {3.50, 7.75, 4.50, 2.50, 1.50, 1.30, 4.50, 4.75, 3.50, 12.75};


    
    cout << "0)  Items: " << ITEMS_NAME[0] << ", Price: " << fixed << setprecision(2) << ITEMS_PRICE[0] << endl;
    cout << "1)  Items: " << ITEMS_NAME[1] << ", Price: " << fixed << setprecision(2) << ITEMS_PRICE[1] << endl;
    cout << "2)  Item: " << ITEMS_NAME[2] << ", Price: " << fixed << setprecision(2) <<  ITEMS_PRICE[2] << endl;
    cout << "3)  Item: " << ITEMS_NAME[3] << ", Price: " << fixed << setprecision(2) << ITEMS_PRICE[3] << endl;
    cout << "4)  Item: " << ITEMS_NAME[4] << ", Price: " << fixed << setprecision(2) << ITEMS_PRICE[4] << endl;
    cout << "5)  Item: " << ITEMS_NAME[5] << ", Price: " << fixed << setprecision(2) << ITEMS_PRICE[5] << endl;
    cout << "6)  Item: " << ITEMS_NAME[6] << ", Price: " << fixed << setprecision(2) << ITEMS_PRICE[6] << endl;
    cout << "7)  Item: " << ITEMS_NAME[7] << ", Price: " << fixed << setprecision(2) << ITEMS_PRICE[7] << endl;
    cout << "8)  Item: " << ITEMS_NAME[8] << ", Price: " << fixed << setprecision(2) << ITEMS_PRICE[8] << endl;
    cout << "9)  Item: " << ITEMS_NAME[9] << ", Price: " << fixed << setprecision(2) << ITEMS_PRICE[9] << endl;
    



 
 cout << "Which do you want to purchase?  Enter the number" << endl;
  cin >> num;
cout << ITEMS_NAME[num] << " cost " << fixed << setprecision(2) << ITEMS_PRICE[num] << endl;

/**while (num >= 0) {             
               // add in to the sum
                   sum = sum + num;
                //
               cin >> num;
        } ***/


    

   
  /***  for(int i  = 0; 0 < 10; i++ ){
  
    cout << "Item: " << ITEMS_NAME[i] << ", Price: " << fixed << setprecision(2) << ITEMS_PRICE[i] << endl;
    } **/
    

    
    return 0;
}