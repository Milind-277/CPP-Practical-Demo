//Create a class Currency with a float value : 1. Convert a float to a Currency object (basic to class), 2. Convert a Currency object to float (class to basic).


#include <iostream>
using namespace std;

class currency {
    private:
        float value;

    public:
        currency() {
            value = 0.0;
        }

        currency(float v) {
            value = v;
        }

        operator float() {
            return value;
        }

        void display() {
            cout << "Currency Value : " <<value <<endl;
        }
};

int main() {

    float f;
    cout << "Enter a float value :";
    cin >> f;

    currency c1 = f;
    cout << "\nAfter converting float to Currency object : \n";
    c1.display();

    float x = c1;
    cout << "\n After converting Currency object back to float : " <<x <<endl;

    return 0;
    
}