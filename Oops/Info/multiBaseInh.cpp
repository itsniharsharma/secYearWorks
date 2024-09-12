#include<iostream>
using namespace std;

class base1{
     public:
     int x;

     void showx(){
        cout << x <<endl;
     }
};

class base2{
     public:
     int y;

     void showy(){
        cout << y << endl;
     }
};

class inh : public base1, public base2{
     public:
     void enterData(int i, int j){
        x =i;
        y =j;
     }
};

int main(){
    inh ob;
    ob.enterData(2, 3);
    ob.showx();
    ob.showy();
    return 0;
}