//Design a C++ class named Delivery Point to simulate the tracking of Smartphone delivery locations on a 2D map. Implement the following:
        //1. Default Constructor: Initializes the delivery location to the warehouse coordinates (0, 0). 
        //2. Parameterized Constructor: Allows initialization of delivery points to specific customer  coordinates.
        //3. Copy Constructor: Enables cloning of an existing delivery location for dispatch duplication or rerouting.
        //4. Destructor: Displays a message when a delivery point object is removed from the system, simulating package delivery completion.




#include <iostream>
using namespace std;

class DeliveryPoint {
private:
    int x, y;   

public:
    DeliveryPoint() {
        x = 0;
        y = 0;
        cout << "Default Constructor: Delivery location set to Warehouse (0, 0)" << endl;
    }

    DeliveryPoint(int a, int b) {
        x = a;
        y = b;
        cout << "Parameterized Constructor: Delivery location set to (" << x << ", " << y << ")" << endl;
    }

    DeliveryPoint(const DeliveryPoint &dp) {
        x = dp.x;
        y = dp.y;
        cout << "Copy Constructor: Delivery location cloned at (" << x << ", " << y << ")" << endl;
    }

    void showLocation() {
        cout << "Current Delivery Location: (" << x << ", " << y << ")" << endl;
    }

    ~DeliveryPoint() {
        cout << "Destructor: Delivery point (" << x << ", " << y 
             << ") removed from system — Package Delivered!" << endl;
    }
};

int main() {
    cout << "\n--- Creating Warehouse Delivery Point ---\n";
    DeliveryPoint d1;             

    cout << "\n--- Creating Customer Delivery Point ---\n";
    DeliveryPoint d2(15, 30);      

    cout << "\n--- Cloning Delivery Point for Rerouting ---\n";
    DeliveryPoint d3 = d2;         

    cout << "\n--- Showing All Locations ---\n";
    d1.showLocation();
    d2.showLocation();
    d3.showLocation();

    cout << "\n--- End of Program ---\n";

    return 0;   

}
