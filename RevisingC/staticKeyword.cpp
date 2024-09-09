#include<iostream>
using namespace std;

// a static data member is shared among all instants of a class rather being specific to object 

class Car {
public:
    string model;
    int speed;

    static int carCount;

    Car(string m, int s): model(m), speed(s){
        carCount++;
    }

    void display(){
        cout << model << "+" << speed << endl;
    }

    static void displayCarCount(){
        cout << carCount << endl;
    }
};

int Car::carCount = 0;

int main(){
    Car car01("BMWaxza", 180);
    Car car02("BMWypj", 180);
    Car car03("BMwhd", 180);

    car01.display();
    car02.display();
    car03.display();

    Car::displayCarCount();
    return 0;
}
