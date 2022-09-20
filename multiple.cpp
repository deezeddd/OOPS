

#include <bits/stdc++.h>

using namespace std;

// C++ program to explain
// multiple inheritance

// first base class
class Vehicle {
public:
//CREATING constructor
	Vehicle() {
	    cout << "This is a Vehicle\n"; 
	    
	}
};


// second base class
class FourWheeler {
public:
//CREATING constructor
	FourWheeler()
	{
		cout << "This is a 4 wheeler Vehicle\n";
	}
};

// sub class derived from two base classes

class Car : public Vehicle, public FourWheeler {
};


int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.


    //ab humne car ka object bnaya( jo ki child h vehicle and fourwheeler ka )... 
    // and humne base classes me constructor isliye bnaye taaki hum ye show kr paaye child class se 
    // ki jab bhi child class ka object bnayenge toh baaki saari parent classes call hongi
	Car obj;
	return 0;
}
