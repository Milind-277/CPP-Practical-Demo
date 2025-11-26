//Create a class CustomerProfile to store and manipulate strings : 1. Overload the + operator to append a suffix or tag (like “_VIP”) to a user’s name for premium users (concatenate two strings), 2. Overload the = operator to assign one user’s name or data to another user profile if needed.


#include <iostream>
#include <string>
using namespace std;

class CustomerProfile {
public:
    string name;

    CustomerProfile(string n = "") {
        name = n;
    }

    CustomerProfile operator+(string suffix) {
        CustomerProfile temp;
        temp.name = name + suffix;
        return temp;
    }

    void operator=(CustomerProfile other) {
        name = other.name;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    CustomerProfile user1("Mohit");
    CustomerProfile user2;

    CustomerProfile user1VIP = user1 + "_VIP";

    user1.display();
    user1VIP.display();

    user2 = user1VIP;

    user2.display();

    return 0;
}