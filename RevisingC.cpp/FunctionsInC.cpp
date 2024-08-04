#include<iostream>
using namespace std;

  //Assigning default parameter
   void myFunction(string country= "India"){ //Dons't mean we assigned it a fix value, it says if nothing passed, just return default India
       cout << country << endl;
   }

int main(){
    myFunction();  //India
    myFunction("USA"); //USA
}