/*
#include <iostream>
using namespace std;


    struct student{   //assigned name to structure, and now can make its objects
        string name;
        int age;
        bool doStudy;
    }

int main() {

    student std01;
    std01.name= "Nihar";
    std01.age=18;
    std01.doStudy=false;

    student std02;  //created an object out of structure
    std02.name= "Divyam";
    std02.age=19;
    std02.doStudy=false;




    // struct{

    //     int myNum;
    //     string myString;

    //   } myStruct; 

   
    // myStruct.myNum = 10;
    // myStruct.myString = "NiharSharma";

    // cout << myStruct.myNum << endl;
    // cout << myStruct.myString << endl;



    return 0;
}

*/

#include<iostream>
using namespace std;

/*
structure is a user-defined datatype
It allows to group different variables of different datatype 
*/


struct person{
    int age;
    string name;
    float height;
}

int main(){
    //creating a variable of that structure 
    person per;

    per.name = "Nihar";
    per.age = 18;
    per.height = 5.7;

    //accessing the data 
    cout << "name: " << per.name << endl;
    cout << "age: " << per.age << endl;

/*
how is structure diffrent from a class ?
- Struct and class are both user defined data types

- class have everything private bydefault
- struct have everything public 

- if needed a simple data cont with public access - use struct 
- if complex functions like abs, enc, inheritance etc needed use class


*/
}
