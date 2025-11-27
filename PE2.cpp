//Create a function template named calculateBill() to compute the total electricity bill.
    //1. Accept units consumed and rate per unit of a generic type T.
    //2. Calculate the total bill using a generic function.
    //3. Display a bill summary that includes consumer name, units consumed, rate, and total amount.




#include <iostream>
#include <string>
using namespace std;

template <typename T>
T calculateBill(T units, T rate) {
	return units*rate;
}

int main() {
	string consumerName;
	double units, rate;
	
	cout << "===== ELECTRICITY BILL ESTIMATOR =====" <<endl;
	cout << "Enter Consumer Name : ";
	getline(cin, consumerName);
	
	cout <<"Enter Units Consumed : ";
	cin >> units;
	
	cout << "Enter Rate per Unit : ";
	cin >> rate;
	
	double totalBill = calculateBill(units, rate);
	
	cout << "\n----- BILL SUMMARY -----" <<endl;
	cout << "Consumer Name : " << consumerName <<endl;
	cout << "Units Consumed : " << units <<endl;
	cout << "Rate per Unit : " <<rate <<endl;
	cout << "Total Bill Amount : $" <<totalBill <<endl;
	cout << "--------------------" <<endl;
	
	return 0;
	
}