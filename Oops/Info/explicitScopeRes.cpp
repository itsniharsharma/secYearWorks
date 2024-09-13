// #include<iostream>
// using namespace std;

// class base{
//     public:
//     int i;
// };

// class derived1 : public base{
//     public:
//     int j;
// };

// class derived2 : public base{
//     public:
//     int k;
// };

// class derived3 : public derived1, public derived2 {
//     public:
//     int sum;
// };


// int main(){
//     derived3 ob;
//     ob.derived1::i = 10;
//     ob.j = 20;
//     ob.k = 30;

//     ob.sum = ob.derived1::i + ob.j + ob.k;

//     cout << ob.derived1::i << endl;
//     cout << ob.j << endl;
//     cout << ob.k << endl;

//     cout << ob.sum << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class base {
//     public:
//     int x;
// };

// class derived1 :  public base {
//     public:
//     int y;
// };

// class derived2 :  public base {
//     public:
//     int z;
// };

// class derived3 : public derived1, public derived2 {
//     public:
//     int sum;
// };

// int main(){
//     derived3 ob;
//     ob.derived2::x =10;
//     ob.y =20;
//     ob.z =30;

//     ob.sum = ob.derived2::x + ob.y + ob.z;

//     cout << ob.sum << endl;
//     return 0;
// }

#include<iostream>
using namespace std;

class base {
    public:
    int x;
};

class derived1 : virtual public base {
    public:
    int y;
};

class derived2 : virtual public base {
    public:
    int z;
};

class derived3 : public derived1, public derived2 {
    public:
    int sum;
};

int main(){
    derived3 ob;
    ob.x =10;
    ob.y =20;
    ob.z =30;

    ob.sum = ob.x + ob.y + ob.z;

    cout << ob.sum << endl;
    return 0;
}