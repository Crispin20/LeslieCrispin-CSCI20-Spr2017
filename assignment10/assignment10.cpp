// Leslie Crispin 
// 1.0 assignment - calculators,  calculate the employees net pay and gross wage based on the hours worked and salary, ending with a wage silp.
// 2-16-17

#include <iostream>
#include <string>
using namespace std;

struct EmployeeInfo {
    
    string employee_name; // enployee name 
    double hours_Work; // hours the employee worked
    double pay_rate; // how they are paid per hour 
    
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
        
    double netpay = 0; // from the gross rate subtract the insurance and taxes
        netpay= (gross_Rate - healthInsurance) - taxesTaken;
        
    cout << endl << endl << "Employee Name: "<< weeklyWage.employee_name << endl << "Hours worked: " << weeklyWage.hours_Work << endl << "Pay Rate: $";
    cout << weeklyWage.pay_rate << endl << "Gross Rate: $" << gross_Rate << endl << "Net pay: $" << netpay;
   
    
    
    return 0;
}
