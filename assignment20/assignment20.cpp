// Leslie Crispin 
// 3-10-17
// Assignment 2.0: Program 3, this program converts money.  The user will enter the amount and the program will convert it to the type desired.
#include <iostream>
#include <string>
using namespace std;

class ConvertMoney{
  public:
     void SetDollar(double convertDollar); 
     void SetEuros(double convertEuros);
     void SetBitcoin(double convertBitcoin);
     void SetYuan(double convertYaun);
     
     double GetDollar() const;
     double GetEuros() const;
     double GetBitcoins() const;
     double GetYuan() const; 
     
    ConvertMoney();//default constructor
    ConvertMoney(double money);
    
    void PrintMoney() const;
  private: 
    double money_ = 0.00;
};

 ConvertMoney::ConvertMoney() {       //defult constructor
        money_ = 0.00;
        return;
    }
    ConvertMoney::ConvertMoney (double money){ 
        money_ = money;
        return;
    }  
    
 void ConvertMoney::SetDollar(double convertDollar){  // function converts dollar to what is desired
     money_ = convertDollar;
     
      char letter;
     
     cout << "What do you want to convert it to?  Enter A for dollar, B for euros, C for bitcoin, D for yuan: ";
     cin >> letter;
       
        if( letter == 'A') { // dallor to dollar 
          
            money_  = (convertDollar * 1);
       
        }
        else if (letter == 'B' ){ // dollar to euros 
           
            money_ = (convertDollar * .94);
            
        }
        else if (letter == 'C'){ // dollar to bitcoin
          
            money_ = (convertDollar * .00085);
           
        }
        else if (letter == 'D'){  // dollar to yuan
       
            money_ = (convertDollar * 6.91);
        }
 
        }
 

 void ConvertMoney::SetEuros(double convertEuros){  // converts to  euros 
     money_ = convertEuros;
     char letter;
     cout << "What do you want to convert it to?  Enter A for dollar, B for euros, C for bitcoin, D for yuan: ";
     cin >> letter;
       
        if( letter == 'A') { // euros to dollar 
           
            money_ = (convertEuros * 1.06);  
        }
        else if (letter == 'B' ){  // euros to euros
            money_ = (convertEuros * 1);
        }
        else if (letter == 'C'){  // euros to bitcoin
            money_ = (convertEuros * .00090);
        }
        else if (letter == 'D'){  // euros to yuan
            money_ = (convertEuros * 7.30);
        }
 }

 void ConvertMoney::SetBitcoin(double convertBitcoin){  // coverts bitcoin 
     money_ = convertBitcoin;
     char letter;
     cout << "What do you want to convert it to?  Enter A for dollar, B for euros, C for bitcoin, D for yuan: ";
     cin >> letter;
       
        if( letter == 'A') {   // bitcoin to dollar 
            money_ = (convertBitcoin * 1174.02);  
        }
        else if (letter == 'B' ){  // bitcoin to euros
            money_ = (convertBitcoin * 1111.65);
        }
        else if (letter == 'C'){  //bitcoin to bitcoin 
           money_ = (convertBitcoin * 1);
        }
        else if (letter == 'D'){  //bitcoin to yuan
            money_ = (convertBitcoin * 8110.72);
        }
 }
 
  void ConvertMoney::SetYuan(double convertYuan){  // converts yuan 
     money_ = convertYuan;
     char letter;
     cout << "What do you want to convert it to?  Enter A for dollar, B for euros, C for bitcoin, D for yuan: ";
     cin >> letter;
       
        if( letter == 'A') { // yuan to dollar 
            money_ = (convertYuan * .14);
        }
        else if (letter == 'B' ){  // yuan to euros
            money_ = (convertYuan * .14);
        }
        else if (letter == 'C'){  // yuan to euros
            money_ = (convertYuan * .00012);
        }
        else if (letter == 'D'){  // yuan to yuan 
            money_ = (convertYuan * 1);
        }
 }
  
       
    double ConvertMoney::GetDollar() const {
        return money_;
    }
    double ConvertMoney::GetEuros() const{
        return money_;
    }
    double ConvertMoney::GetBitcoins() const{
        return money_;
    }
    double ConvertMoney::GetYuan() const{
        return money_;
    } 
    
    void ConvertMoney::PrintMoney() const {
        
        cout << endl << "The ammount is: $" << money_ << endl;
        
        return ;
    }
     
 

int main(){
    ConvertMoney convert;

char letterChoice;
cout << endl << "What type of money do you want to convert?   A for dollar, B for euros, C for bitcoin, or D for yuan: ";
cin >> letterChoice; 
    
   
    if (letterChoice == 'A'){  // if user choose dollar 
        double conDollar = 0.00;
        cout << "How much is it? $";
        cin >> conDollar;
     
        convert.SetDollar(conDollar);   
         ConvertMoney();
    }
    else if (letterChoice == 'B'){  // if user choose euros 
        double conEuros = 0.00;
        cout << "How much is it? $";
        cin >> conEuros; 
        
        convert.SetEuros(conEuros);
         ConvertMoney();
    }
    else if (letterChoice == 'C'){  // if user choose bitcoins 
        double conBitcoin = 0.00;
        cout << "How much is it? $";
        cin >> conBitcoin;
        convert.SetBitcoin(conBitcoin);
         ConvertMoney();
    }
    else if (letterChoice == 'D'){  // if user choose yuan
        double conYuan = 0.00;
        cout << "How much is it? $";
        cin >> conYuan;
        convert.SetYuan(conYuan);
         ConvertMoney();
        
    }
    
    convert.PrintMoney();
    
    return 0;
}