#include<iostream>
using namespace std;

class sec;

class fir{
    int a;
    public:
    fir(int x): a(x){}
    void display(){
        cout << a << endl;
    }

    friend int add(fir, sec);
};

class sec {
    int b;
    public:
    sec(int y): b(y){};
     void display(){
        cout << b << endl;
    }

    friend int add(fir, sec);
};

int add(fir ob1, sec ob2){
    cout << ob1.a+ob2.b <<endl;
}

int main(){
    fir ob1(2);
    sec ob2(3);
    
    add(ob1, ob2);
    return 0;
}