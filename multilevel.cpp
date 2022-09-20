#include <bits/stdc++.h>

using namespace std;
// C++ program to implement
// Multilevel Inheritance

// base class
class Vehicle {
public:
	Vehicle() { 
        cout << "This is a Vehicle\n"; 
        }
};

// first sub_class derived from class vehicle
class fourWheeler : public Vehicle {
public:
	fourWheeler()
	{
		cout << "Objects with 4 wheels are vehicles\n";
	}
};
// sub class derived from the derived base class fourWheeler
class Car : public fourWheeler {
public:
	Car() { 
        cout << "Car has 4 Wheels\n"; 
        }
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.

        // multiple me jaisa hua tha waisa hi h 
        // ek baar multilevel ka diag dekh lena aa jayega smjh
        // baaki remaning inheritance k bhi diagram dekh lena..
        //  wo sab bhi tujhe multiple dekh k aa jaayenge smjh
	Car obj;
	return 0;
}
