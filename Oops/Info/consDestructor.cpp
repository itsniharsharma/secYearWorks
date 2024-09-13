#include<iostream>
using namespace std;

class base {
    public:
    base(){
        cout << "constructing base class" <<endl;
    }
    ~base(){
        cout << "destructing base" <<endl;
    }
};

class derived : public base {
    public:
    derived(){
        cout << "derived constructor" << endl;
    }

    ~derived(){
        cout << "derived destructor" << endl;
    }
};

int main(){
    derived ob;
    return 0;
}