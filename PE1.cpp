//Create a class template GroceryCalculator with a generic type T. The class should have private members to store the item name, quantity, and price per unit of type T.
//1. Input grocery details (item name, quantity, price per unit).
//2. Calculate the total cost for each item.
//3. Display the grocery bill with item details and total cost.
    //Write a program to demonstrate the use of the GroceryCalculator class with integers (for quantity) and floats (for price).



#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class GroceryCalculator {
	private:
		string itemName;
		T1 quantity;
		T2 pricePerUnit;
		
	public:
		void inputDetails() {
			cout << "Enter Item Name : ";
			getline(cin, itemName);
			cout << "Enter Quantity : ";
			cin >> quantity;
			cout << "Enter Price per Unit : ";
			cin >> pricePerUnit;
			cin.ignore();
		}
		
		T2 calculateTotal() {
			return quantity*pricePerUnit;
		}
		
		void displayBill() {
			cout << "\n----- Grocery Bill -----\n";
			cout << "Item Name : " <<itemName <<endl;
			cout << "Quantity : " <<quantity <<endl;
			cout << "Price/Unit : " <<pricePerUnit <<endl;
			cout << "Total Cost : " <<calculateTotal() <<endl;
			cout << "----------------------\n";
		}
};

int main() {
	cout << "=== Grocery Bill Calculator ===\n";
	
	GroceryCalculator <int, float> item1;
	item1.inputDetails();
	item1.displayBill();
	
	return 0;
	
}