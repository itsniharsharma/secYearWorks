// #include<iostream>
// using namespace std;

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







