
#include <bits/stdc++.h>

using namespace std;

class scooter {
    public:
    char handle;
    
};

class actva : public scooter{ // ye syntax h derivative class( child class ) bnane ka
    public :
    void f(){
        cout << handle<< endl;
    }
};



int main()
{
    actva a;
    a.handle = 'T';
    a.f();
         // isme dekh actva child h scooter ka.. and humne handle 
        //  declare kia h scooter me but hum use usko actva me bhi kar paa rhe h
    return 0;
}
