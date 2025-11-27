//Design a drawing tool system where you have a base class Shape with a virtual method draw(). Create derived classes like Circle, Traingle and Square to override the draw() method for their respective shapes. Use a Shape* base pointer to call the overridden methods dynamically at runtime.



#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square." << endl;
    }
};

int main() {
    Shape *ptr;  

    Circle c;
    Triangle t;
    Square s;

    ptr = &c;
    ptr->draw();

    ptr = &t;
    ptr->draw();

    ptr = &s;
    ptr->draw();

    return 0;
}
