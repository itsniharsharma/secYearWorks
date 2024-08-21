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