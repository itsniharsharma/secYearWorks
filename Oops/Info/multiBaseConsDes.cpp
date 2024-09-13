#include<iostream>
using namespace std;

class base1 {
    public:
    base1(){
        cout << "const base1" << endl;
    }

    ~base1(){
        cout << "des base1" << endl;
    }
};

class base2 {
    public:
    base2(){
        cout << "const base2" << endl;
    }

    ~base2(){
        cout << "des base2" << endl;
    }
};

class der : public base1, public base2 {
    public:
    der(){
        cout << "derived const" << endl;
    }

    ~der(){
        cout << "derived destructor" << endl;
    }
};

int main(){
    der obj;
    return 0;
}