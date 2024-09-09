#include<iostream>
using namespace std;

inline int add(int a, int b){
    return a+b;
}

inline int sub(int a, int b){
    return a-b;
}

// int main(){
//     int sum = add(2,4);
//     int subtr = sub(5,1);
//     cout << sum <<endl;
//     cout << subtr <<endl;
//     return 0;
// }

class rectangle {

public:

int len;
int bre;

rectangle(int l, int b) : len(l), bre(b){}

  int area(){
    return len*bre;
  }
};

void printArea(rectangle rec){
    cout << "area is: " << rec.area() << endl;
}

// int main(){
//     rectangle rec1(2,3);
//     printArea(rec1);
//     return 0;
// }

void modifyedRec(rectangle& rect){
    rect.len = 20;
    rect.bre = 10;
    cout << "modifyed dim: " << rect.len << "x" << rect.bre <<endl;
}

// int main(){
//     rectangle rect01(2,4);
//     cout << "original dim: " << rect01.len << "x" << rect01.bre <<endl;

//     modifyedRec(rect01);

//     cout << rect01.area() <<endl;
//     return 0;
// }

//implimenting, how pass by value don't change original value 

class Car {
public: 
    string model;
    int speed;

    Car(string m, int s) : model(m), speed(s){}

    void display(){
        cout << model << "+" << speed <<endl;
    }
};

void changeSpeed(Car &car){
    car.speed = 200;
    car.model = "ferrari";
    cout << "now speed is: " << car.speed << car.model << endl;
}

// int main(){
//     Car car01("jeep", 150);
//     car01.display();

//     changeSpeed(car01);

//     car01.display();

//     return 0;
// }


//returning a function 
class awsCar {
public:
   string model;
   int speed;

   awsCar(string m, int s): model(m), speed(s){}

   void display(){
     cout<< model << "+" << speed <<endl;
   }
};

awsCar myCar(){
    awsCar myFav("jag", 150);
    return myFav;
};

int main(){
    awsCar sampleCar = myCar();
    sampleCar.display();
    return 0;
}
