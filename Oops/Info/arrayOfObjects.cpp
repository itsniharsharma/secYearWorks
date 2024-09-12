// array of objects in parametarized constructor

// #include<iostream>
// using namespace std;

// class test {
//     int a,b;
//     static int count;
//     public:
//     test(int a, int b){
//         this->a =a;
//         this->b =b;
//     cout << "parametarized constructor" << endl;
//     count++;
//     }

//     void show(){
//         cout << a << "\t" << b << endl;
//     }

//     static void showCount(){
//         cout << count << endl;
//     }
// };

// int test :: count;

// int main(){

//     test t1(10,20);
//     t1.show();

//     test t[3]= {test(30,40), test(50,60), test(70,20)};
//     t[0].show();
//     t[1].show();
//     t[2].show();
//     test::showCount();
//     return 0;
// }

#include<iostream>
using namespace std;

class test {
    int a,b;
    static int count;
    public:
    test(int a, int b){
        this->a =a;
        this->b =b;

        count++;

        cout << "constructor" << endl;
    }

    void value(){
       cout << a << b << endl;
    }

    void count(){
       cout << count << endl;
    }
};

int test :: count;

int main(){
    test testArray[3] = {test(2,3), test(3,4), test(5,6)};
    testArray[0].value()
    return 0;
}