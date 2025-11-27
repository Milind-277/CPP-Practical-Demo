//Create a system that manages a product list for an e-commerce platform using the STL list container. Each product has a name, price, and customer rating.
    //1. Create a list to store product data. 
    //2. Sort the products by ascending price 
    //3. Sort the products by descending customer rating.



#include <iostream>
#include <list>
#include <string>
using namespace std;

struct Product {
    string name;
    float price;
    float rating;
};

void display(const list<Product> &products) {
    cout << "\n--- Product List ---\n";
    for (const auto &p : products) {
        cout << "Name: " << p.name
             << " | Price: " << p.price
             << " | Rating: " << p.rating << endl;
    }
}

int main() {
    list<Product> products;
    int choice;

    do {
        cout << "\n--- E-Commerce Product List ---\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Sort by Ascending Price\n";
        cout << "4. Sort by Descending Rating\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Product p;
            cout << "Enter Product Name: ";
            cin.ignore();
            getline(cin, p.name);

            cout << "Enter Price: ";
            cin >> p.price;

            cout << "Enter Customer Rating (1–5): ";
            cin >> p.rating;

            products.push_back(p);
            cout << "Product added successfully!\n";
        }

        else if (choice == 2) {
            if (products.empty()) {
                cout << "No products available!\n";
            } else {
                display(products);
            }
        }

        else if (choice == 3) {
            products.sort([](const Product &a, const Product &b) {
                return a.price < b.price; 
            });
            cout << "\nProducts sorted by ascending price!\n";
        }

        else if (choice == 4) {
            products.sort([](const Product &a, const Product &b) {
                return a.rating > b.rating; 
            });
            cout << "\nProducts sorted by descending rating!\n";
        }

    } while (choice != 5);

    cout << "Thank you!\n";

    return 0;

}
