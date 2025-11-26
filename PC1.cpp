//Implement a class Complex which represents the Complex Number data type. Implement the following : 1. Constructor including a default constructor which creates the complex number 0+0i, 2. Overload operator+ to add two complex numbers, 3. Overload operator* to multiply two complex numbers, 4. Overload operators << and >> to print and read Complex Numbers.


#include <iostream>
using namespace std;

class complex {
	private :
		float real, imag;
		
	public :
		complex() {
			real=0;
			imag=0;
		}
		
		complex(float r, float i) {
			real=r;
			imag=i;
		}
		
		complex operator+(const complex &c) {
			return complex(real + c.real, imag + c.imag);
		}
		
		complex operator*(const complex &c) {
			return complex ((real * c.real - imag * c.imag),
							(real * c.imag + imag * c.real));
		}
		
		friend istream &operator >> (istream &in, complex &c) {
			cout << "Enter real part : ";
			in >> c.real;
			cout << "Enter imaginary part : ";
			in >> c.imag;
			return in;
		}
		
		friend ostream &operator << (ostream &out, const complex &c) {
			out << c.real;
			if(c.imag >= 0)
				out << " + " << c.imag <<"i";
			else
				out << " - " << -c.imag <<"i";
			return out;
		}
};

int main() {
	complex c1, c2, sum, product;
	
	cout << "Enter 1st complex number : ";
	cin >> c1;
	
	cout << "Enter 2nd complex number : ";
	cin >> c2;
	
	sum = c1 + c2;
	product = c1 * c2;
	
	cout << "\nFirst complex number : " <<c1;
	cout << "\nSecond complex number : " <<c2;
	cout << "\nSum : " <<sum <<endl;
	cout << "\Product : " <<product <<endl;
	
	return 0;
}