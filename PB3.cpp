//Create a class ‘Rectangle’ with data members length and breadth.
        //1. Define a constructor to initialize data. 
        //2. Define member functions area() and perimeter() outside the class. 
        //3. Make area() function inline.




#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    Rectangle(float l, float b);

    inline float area();       
    float perimeter();
};

Rectangle::Rectangle(float l, float b) {
    length = l;
    breadth = b;
}

inline float Rectangle::area() {
    return length * breadth;
}

float Rectangle::perimeter() {
    return 2 * (length + breadth);
}

int main() {
    float l, b;

    cout << "Enter Length: ";
    cin >> l;
    cout << "Enter Breadth: ";
    cin >> b;

    Rectangle r(l, b);

    cout << "\nArea of Rectangle: " << r.area() << endl;
    cout << "Perimeter of Rectangle: " << r.perimeter() << endl;

    return 0;
}
