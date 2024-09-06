#include<iostream>
using namespace std;

//we can pass a struct in a function as a value or by refereance 

struct person {
    int age;
    string name;
};

//by value 
// void printPerson(person p){
//     cout << p.name << p.age << endl;
// };

//by referance 
//it avoids coping entire structure, incase if its v large 
void printPerson(const person& p){
     cout << p.name << p.age << endl;
}


// int main(){
//     person per = {18, "Nihar"};
//     printPerson(per);
//     return 0;
// }


//constructor of structs

struct myFriend{
     string name;
     int age;

//making a constructor 
     myFriend(string n, int a){
        name = n;
        age = a;
     }
};

int main(){

    //making an object 
    myFriend buddy("Pratham", 18);
    cout << buddy.name << endl;
    cout << buddy.age << endl;

    return 0;
}

