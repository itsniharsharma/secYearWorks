#include<iostream>
using namespace std;

class test {
    public:
    int data;
    test(int x) : data(x) { cout <<"constructor is called" <<endl;}

    friend void showdata(test a);
};

void showdata(test a){
    cout << a.data << endl;
}

int main(){
    test t1(4);
    showdata(t1);
    return 0;
}