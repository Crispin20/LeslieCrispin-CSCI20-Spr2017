// Leslie Crispin 
// 1.0 assignment - calculators
// 2-16-17

#include <iostream>
#include <string>
using namespace std;

struct EmployeeInfo {
    
    string employee_name;
    double hours_Work;
    double pay_rate;
    
};

int main(){
    EmployeeInfo weeklyWage;
    
    cout << "Enter Employee's name: ";
    getline (cin, weeklyWage.employee_name);
    
      cout << "Enter wage: ";
   cin >> weeklyWage.pay_rate;
   
   cout << "Enter employee's hours worked:  ";
   cin >> weeklyWage.hours_Work;
   
 
   int healthInsurance = 130;
   double wageTax = .17;
   
   
   
   double gross_Rate = 0;
        gross_Rate = weeklyWage.hours_Work * weeklyWage.pay_rate;
        
    double taxesTaken = 0;
        taxesTaken = gross_Rate * wageTax ;
        
    double netpay = 0;
        netpay= (gross_Rate - taxesTaken) - healthInsurance;
        
    cout << "Employee Name: "<< weeklyWage.employee_name << endl << "Hours worked: " << weeklyWage.hours_Work << endl << "Pay Rate: ";
    cout << weeklyWage.pay_rate << endl << "Gross Rate: " << gross_Rate << endl << "Net pay: " << netpay;
   
    
    
    return 0;
}
