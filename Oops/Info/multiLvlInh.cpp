#include<iostream>
using namespace std;

class test1 {
    public:
    void disp1(){
        cout << "i am 1" << endl;
    }
};

class test2 : public test1{
    public:
    void disp2(){
        cout << "i am 2" << endl;
    }
};

class der : public test2 {
    public:
    void disp3(){
        cout << "i am 3" << endl;
    }
};

int main(){
    der ob;
    ob.disp1();
    ob.disp2();
    ob.disp3();
    return 0;
}