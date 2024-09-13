// #include<iostream>
// using namespace std;

// class base1{
//     public:
//     int i;
//     public:
//     base1(int x){
//         i=x;
//         cout << "const base1" << endl;
//     }

//     ~base1(){
//         cout << "dest base1" << endl;
//     }
// };

// class base2{
//     public:
//     int j;
//     public:
//     base2(int y){
//         j=y;
//         cout << "const base2" <<endl;
//     }

//     ~base2(){
//         cout <<"dest base2" <<endl;
//     }
// };

// class derived : public base1, public base2{
//     public:
//     int k;
//     public:
//     derived(int x, int y, int z):base1(y),base2(z){
//          k = x;
//          cout << "const derived" << endl;
//     }

//     ~derived(){
//         cout << "dest derived" << endl;
//     }

//     void show(){
//         cout << i << " " << j << " " << k << endl;
//     }
// };


// int main(){
//     derived ob(3,4,5);
//     ob.show();
//     return 0;
// }


#include<iostream>
using namespace std;

class base1{
    public:
    int x;
    public:
    base1(int i){
        x=i;
        cout << "const base1" << endl;
    }

    ~base1(){
        cout << "dest base1" << endl;
    }
};

class base2{
    public:
    int y;
    public:
    base2(int j){
        y=j;
        cout << "const base2" << endl;
    }

    ~base2(){
        cout << "dest base2" << endl;
    }
};

class derived : public base1, public base2{
    public:
    int z;
    public:
    derived(int k, int a, int b):base1(a),base2(b){
        z=k;
        cout << "const derived" << endl;
    }

    ~derived(){
        cout << "dest derived" << endl;
    }

    void show(){
        cout << x << " " << y << " " << z << endl;
    }
};

int main(){
    derived ob(3,4,5);
    ob.show();
    return 0;
}