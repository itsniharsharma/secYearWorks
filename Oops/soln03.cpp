// #include<iostream>
// using namespace std;

// class test{
//     int a, b;

// public:
//     void getData(int x, int y){
//         a = x; 
//         b = y;
//     } 

//     void display(){
//         cout << a << " " << b << endl;
//     }

//     friend void sum(test h);
// };

// void sum(test h){
//     cout << "sum is: " << h.a + h.b << endl;
// };

// int main(){

//     test t1, t2;
//     t1.getData(10, 20);
//     t2.getData(30, 40);

//     t1.display();
//     t2.display();

//     sum(t1);  //30
//     sum(t2);  //70 

//     return 0;
// }

//---------------------------------------------------------------

// #include<iostream>
// using namespace std;

// class test {

//    int a, b; 

// public: 
//    void getData(int a, int b){
//        this->a =a;
//        this->b =b;

//        cout << this << endl;
//    };

//    void display(){
//      cout << this->a << " " << this->b << endl;
//    };

//    friend void sum(test h);
// };

// void sum(test h){
//     cout << "sum is: " << h.a + h.b << endl;
// };

// int main(){
//     test t1;
//     test* tstptr = &t1; 

//     tstptr->getData(10, 20);  // address
//     cout << &t1 << endl;      // same address

//     tstptr->display(); // 10 20
//     t1.display();      // 10 20

//     sum(t1);   //

    
//     return 0; 
// }
//---------------------------------------------------------------------

/*
#include<iostream>
using namespace std; 

class orange;

//-----------------------
class apple{
string data01;

public:
void getData(string inp){
    this->data01 =inp;
}

void display(){
    cout << data01 << endl;
}

friend void swapData(apple &a, orange &o);
};
//-------------------------

class orange{
string data02;

public:
void getData(string inp){
    this->data02 =inp;
}

void display(){
    cout << data02 << endl;
}

friend void swapData(apple &a, orange &o);
};
//-----------------------------

void swapData(apple &a, orange &o){
    string temp = a.data01;
    a.data01 = o.data02; 
    o.data02 = temp;
}

int main(){
    
    apple myApple;
    orange myOrange;

    myApple.getData("This apple is sweet");
    myOrange.getData("This orange is sour");

    swapData(myApple, myOrange);

    myApple.display(); //This orange is sour
    myOrange.display(); //This apple is sweet

    return 0;
}
*/

//----------------------------------------------------

//Write a program to add data objects of two different classes using friend functions.

/*
#include<iostream>
using namespace std;

class test02;

//--------------------------------------
class test01{
    int data01;

public: 
    void getData(int x){
        this->data01 =x;
    }

    void display(){
        cout << "number01 is: " << this->data01 << endl;
    }

    friend void sum(test01 h, test02 i);
};
//---------------------------------------

class test02{
    int data02;

public: 
    void getData(int y){
        this->data02 =y;
    }

    void display(){
        cout << "number02 is: " << this->data02 << endl;
    }
   
    friend void sum(test01 h, test02 i);

}; 

//----------------------------------------

void sum(test01 parameter1, test02 parameter2){
    cout << "sum is: " << parameter1.data01 + parameter2.data02 << endl;
}

int main(){
    
    test01 good;
    test02 bad; 

    good.getData(4);
    bad.getData(5);

    good.display();
    bad.display();

    sum(good, bad);

    return 0;
}
*/
//-----------------------------------------------------------------------

//ANS 4: REFER ABOVE QUESTIONS 

//-----------------------------------------------------------------------

#include<iostream>
using namespace std;

int main(){
    
}