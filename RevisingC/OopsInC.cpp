#include<iostream>
using namespace std;

// class myClass{
//     public: //access specifiers, bydefault every class is private
//     string myName;
//     string mydegree;  //attributes of class
// };

// int main(){
//     myClass std01; //making objects out of class
//     std01.myName="Nihar";
//     std01.mydegree="Btech";

//     cout << std01.myName << endl;
//     cout << std01.mydegree << endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class myClass{
//     public: //access specifiers, bydefault every class is private
//     void greeting(){
//         cout << "May you live long!" << endl;  //This is function defined inside class
//     }
// };

// int main(){
//     myClass std01; //making objects out of class
//     std01.greeting(); //greetings is called method, method is inbuilt function of a class
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class myClass{
//     public: //access specifiers, bydefault every class is private
//     void greeting();
// };


// void myClass::greeting(){   //This is function defined outside the class.
//     cout << "Hello Nihar, How are you?" << endl;   
// }


// int main(){
//     myClass std01; //making objects out of class
//     std01.greeting(); //greetings is called method, method is inbuilt function of a class
//     return 0;
// }





//Understanding constructors
//Constructors are basically methods with their name as of class, means when an object is created, they are automatically called! 



// #include<iostream>
// using namespace std;


// class myGreetings{
//     public: //access specifiers, bydefault every class is private
//      myGreetings(){
//         cout << "Namaste, I am a constructor, with name as of class!" << endl;
//     }
// //Point to be noted : The constructor has the same name as the class, it is always public, and it does not have any return value.
    
// };

// int main(){
//     myGreetings greet01; //making objects out of class
//     //See, I havnt called my method, just created an object and its automatically called!
//     return 0;
// }

//Just like functions, constructors can also be defined outside the class, as:

// #include<iostream>
// using namespace std;

// class Car {        // The class
//   public:          // Access specifier
//     string brand;  // Attribute
//     string model;  // Attribute
//     int year;      // Attribute
//     Car(string x, string y, int z); // Constructor declaration with parameters
// };

// // Constructor definition outside the class
// Car::Car(string x, string y, int z) {
//   brand = x;
//   model = y;
//   year = z;
// }

// int main() {
//   // Create Car objects and call the constructor with different values
//   Car carObj1("BMW", "X5", 1999);
//   Car carObj2("Ford", "Mustang", 1969);

//   // Print values
//   cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//   cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//   return 0;
// }

//-------------------------------------------------------------------------------------------------------
//Encapsulation 
//It means to hide some data and show the permitted stuff only

// #include<iostream>
// using namespace std;

// class Employee{

//     private: 
//     int salary;

//     public:
//     //setter
//     void setSalary(int s){
//         salary = s;
//     }

//     int getSalary(){
//         //getter
//         return salary;
//     }
// };

// int main(){
//     Employee Abhishek;
//     Abhishek.setSalary(20000);
//     cout << Abhishek.getSalary() << endl;
//     return 0;
// }

/*
It is considered good practice to declare your class attributes as private (as often as you can). 
Encapsulation ensures better control of your data, because you (or others) can change one part of 
the code without affecting other parts.
It also Increases security of data
*/

//------------------------------------------------------------------------------------------------------------


//Inharitance
//It means to inharite some of the properties
//It's divided in 2 groups, derived class and parent class

// class stationary{  //Stationary is parent class
//     public:
//     string brand="Natraj";
//     int price=60;

//     void write(){
//         cout << "It write's clearly!" << endl;
//     }
// };

// //Constructing a child class: pencil

// class pencil : public stationary{  //created pencil class, having properties of stationary, with extra feature of discount
//     public:
//     string discount="10%";
// };

// class pen : public stationary{    //created pen class, having properties of stationary, with extra feature of discount
//     public:
//     string discount="5%";
//     string extraFeature="It's longlasting with extra ink";
// };

// int main(){
//     pencil theOneInMyKit;
//     theOneInMyKit.write(); //write() is a method
//     cout << theOneInMyKit.brand << endl;
//     cout << theOneInMyKit.price << endl;
//     cout << theOneInMyKit.discount << endl << endl;


//     pen theOneInMyBag;
//     theOneInMyBag.write();
//     cout << theOneInMyBag.brand << endl;
//     cout << theOneInMyBag.price << endl;
//     cout << theOneInMyBag.discount << endl;
//     cout << theOneInMyBag.extraFeature << endl << endl;
//     return 0;
// }

/*
  - What basically i did is: 
  - Targetted stationary of brand natraj, having same price and similar good properties, when they used
  - Now, taken two aspects of stationary - Pen and Pencil
  - Both have similar features, but distinct by discounts.
  - So inhirited all similar features and added new features which make them distinct
  - class childClassName : public ParentClass{
        Here u go
      }
  - Remembar, parent class must be public to give access to its properties.
*/

//--------------------------------------------------------------------------------------------------

//Multiple Inheritance is 
//Having 2 parent class and child class has properties of both parent classes as:

// Base class
// class MyClass {
//   public:
//     void myFunction() {
//       cout << "Some content in parent class." ;
//     }
// };

// // Another base class
// class MyOtherClass {
//   public:
//     void myOtherFunction() {
//       cout << "Some content in another class." ;
//     }
// };

// // Child class
// class MyChildClass: public MyClass, public MyOtherClass {
// };

// int main() {
//   MyChildClass myObj;
//   myObj.myFunction();
//   myObj.myOtherFunction();
//   return 0;
// }

//----------------------------------------------------------------------------------------------

//Understanding PolyMorphism

// class Animals{
//     public:
//     string name;
//     int age;

//     void makeSound(){
//         cout << "Makes wild sound!" << endl;
//     }
// };

// class cat : public Animals{
//     public:
//     void makeSound(){
//         cout << "Meow" << endl;
//     }
// };

// class dog : public Animals{
//     public:
//     void makeSound(){
//         cout << "woof" << endl;
//     }
// };


// void playSound(Animals* pet) {  //entered pointer named animal
//     pet->makeSound();
// }


// int main(){
//     Animals* animal01 = new dog();
//     Animals* animal02 = new cat();

//     playSound(animal01);
//     playSound(animal02);
//     return 0;
// }

//HELP NEEDED!! 

//----------------------------------------------------------------------------------------


















