//Leslie Crispin
//5-23-17
// Program accepts user input for dishes and price, inputs it into arrays
//and it sends info int the class and out put the tip, taxes, food total,
//and total price and also outputs it into a file


#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;
class Restaurant
{

	public:
	void SetCalculatedBill( int sum);	// calculates the total food price
	double GetCalculatedBill() const;
	void SetCalculatedTaxes();
	double GetCalculatedTaxes() const;
	void SetCalculatedTip();
	double GetCalculatedTip() const;
	Restaurant();
	Restaurant(double total_, double taxtotal_, double totalTip_);
	void Print() const;
	
	private: 
	double total_ = 0;
	double taxtotal_ = 0;
	double totalTip_ = 0;
	
};
Restaurant::Restaurant(){ //default constructor
	 total_ = 0.00;
   	 taxtotal_ = 0.00;
	 totalTip_ = 0.00;
}
Restaurant::Restaurant(double total_, double taxtotal_, double totalTip_){
	total_ = total_;
	 taxtotal_ = taxtotal_;
	 totalTip_ = totalTip_;
	
}



	void Restaurant::SetCalculatedBill(int sum){ // price of food 
			
			
				total_ = sum;
			
		}
	void Restaurant::SetCalculatedTaxes(){ // price of taxes, 7.25% recommened by google 
		
		taxtotal_ = (total_ * .0725); 
	}
		
	void Restaurant::SetCalculatedTip(){// tip to leave recommended by google
		
		totalTip_ = total_ * .15;

	}
	

	double  Restaurant::GetCalculatedBill() const{
		
		return total_;
	}
	double Restaurant::GetCalculatedTaxes() const{
		return taxtotal_;
		
	}
	double Restaurant::GetCalculatedTip() const {
		return totalTip_;
		
	}
	
	void Restaurant::Print() const{
		ofstream inFS; // following out put to food.txt
		inFS.open("food.txt"); 
		inFS << "      Food Total" << endl;
		inFS << "Food Price Total: " << fixed <<setprecision(2)<< total_ << endl;
		inFS << "Food Tax: " << fixed << setprecision(2) <<taxtotal_ << endl;
		inFS << "Tip Total: "  << fixed <<setprecision(2) <<totalTip_ << endl;
		inFS << "Price Total: " << fixed << setprecision(2) << total_ + taxtotal_ + totalTip_ << endl; 
		inFS.close();
		
		cout << "      Food Total" << endl;
		cout << "Food Price Total: " << fixed <<setprecision(2)<< total_ << endl;
		cout << "Food Tax: " << fixed << setprecision(2) <<taxtotal_ << endl;
		cout << "Tip Total: "  << fixed <<setprecision(2) <<totalTip_ << endl;
		cout << "Price Total: " << fixed << setprecision(2) << total_ + taxtotal_ + totalTip_ << endl; 
		
		return;
	}

int main(){
Restaurant price;
		
		string dish[10];
		double foodPrice[10];
		int num = 0;
		int sum = 0;
		double cost = 0;
		

cout<<"Enter number of dishes (<=10): ";
	cin>> num;
			//istead add the file input and as the disshes 
		for (int i = 0; i <= num - 1; i++){  //-1 bc of the index
		
			cout << "Name: ";
			cin>> dish[i];
			cout << "foodPrice: ";
			cin >> foodPrice[i];
				if (foodPrice[i] == 0){
				cout << "Invalid";
				return 0;
			}
		sum = foodPrice[i]+ sum;
			
			
		price.SetCalculatedBill(sum);
		price.SetCalculatedTaxes();
		price.SetCalculatedTip();
		
			}
			cout<<endl;
	
	
	
	for (int i=0; i<=num; i++){
				cout << dish[i]<<" "<<"price is "<< fixed<< setprecision(2)<<foodPrice[i]<<endl;
		}		
	cout << endl;
	
	price.Print();

	return 0;
}