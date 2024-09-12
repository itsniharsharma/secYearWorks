#include<iostream>
using namespace std;

class test {
    int a,b;
public:
   void getData(int a, int b){
       this->a=a;
       this->b=b;
   }

   void printThisA(){
      cout << a << "+" << b << endl;
   }
};

class Inher : public test {
    int c;
    public:
    void getC(int c){
        this->c=c;
    }

    void printThis(){
        cout << c << endl;
    }
};

int main(){
    Inher t1;
    t1.getData(2,3);
    t1.getC(4);

    t1.printThisA();
    t1.printThis();
    return 0;
}