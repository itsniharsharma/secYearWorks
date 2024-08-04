#include <iostream>
using namespace std;

int main(){
    //Creating references
    string food= "Pizza";
    string* ptr= &food;  //pointer named ptr saved memory address of food
    cout << ptr <<endl;  //This is called reference, output as memory address
    cout << *ptr << endl; //This is called dereference, output as value

    string &meal= food;  
    //This &meal is now called as refernce for food

    cout << food << endl;
    cout << &meal << endl; //This is memory address
    cout << meal << endl;

    //Pointer is something that stores  


    //Its facinating that by changing value of pointer, we can change actual value of variable, as:

    string name= "Nihar"; 
    cout << name << endl; //Nihar
    string* ptrname = &name; //so ptrname stores memory address of name
    cout << ptrname << endl; //return address value
    cout << *ptrname << endl; //By this, we Derefrenced ptrname, It returns actual value
    *ptrname= "Rohit"; //changed value of pointer variable
    //It also changed actual value of variable
    cout << name << endl; //Rohit

    
}