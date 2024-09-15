//creating a copy constructor
#include<iostream>
using namespace std;

class test {
    int a,b;
    public:
    void getData(int a, int b){
        this->a=a;
        this->b=b;
    }

    void display(){
        cout << a << "+" << b << endl;
    }

    friend void sum(test h);
};

void sum(test h){
    cout << h.a + h.b << endl;
}

int main(){
    test t1, t2;
    test* tstptr = &t1;

    t1.getData(2,3);
    t2.getData(4,5);

    tstptr->display();

    sum(t1);
    sum(t2);
    return 0;
}