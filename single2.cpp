
#include <bits/stdc++.h>

using namespace std;

class scooter {
    public:
    char handle;
    
};

class actva : public scooter{ 
    public :
    void f(); // ye dusra way h -> define member function without argument outside the class
    //isme bas function define kr do class k andar


   
};
// but function implement class ke bahar 
//using scope resolution 
 // NOTE -> class k name k pehle likha h data type( void )
 void actva :: f(){
        cout << handle<< endl;
    }


int main()
{
    actva a;
    a.handle = 'T';
    a.f();
         // isme dekh actva child h scooter ka.. and humne handle 
        //  declare kia h scooter me but hum use usko actva me bhi kar paa rhe h
    return 0;
}


