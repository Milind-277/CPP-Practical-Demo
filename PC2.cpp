//Create a C++ class UserProfile to manage customer details : 1. Overload the unary minus operator (-) to temporarily deactivate a user account, 2. Simulate increasing(++) the number of orders placed by the user


#include <iostream>
#include <string>
using namespace std;

class userprofile {
	private :
		string username;
		bool isActive;
		int orders;
		
	public:
		userprofile(string name, int ord=0, bool active = true) {
			username = name;
			orders = ord;
			isActive = active;
		}
		
		void operator-() {
			isActive = false;
			cout << "User " <<username <<" has been temporarily deactivated." <<endl;
		}
		
		void operator++() {
			orders++;
			cout << "Order count increased. Total orders for " <<username <<":" <<orders <<endl;
		}
		
		void display() {
			cout << "Username : " <<username <<endl;
			cout << "Status : " <<(isActive?"Active":"Deactivated") <<endl;
			cout << "Orders : " <<orders <<endl;
		}
};

int main() {
	userprofile user1("Aarush", 3);
	
	cout << "Initial User Details : " <<endl;
	user1.display();
	
	cout << "\nApplying Unary Minus (-) to deactivate user..." <<endl;
	-user1;
	
	cout << "\nApplying ++ opertor to increase orders..." <<endl;
	++user1;
	
	cout << "\nUpdated User Details : " <<endl;
	user1.display();
	
	return 0;
	
}