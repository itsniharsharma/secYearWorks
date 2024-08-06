#include<iostream>
using namespace std;

int main(){
   //Understanding try through and catch
   /*
      The try statement allows you to define a block of code to be tested for errors while it is being executed.
      The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
      The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.
   */

  

  try{
    int age=17;
    if(age >= 18){
        cout << "You can go to club" << endl;  //Check if it's ok
    } else{
        throw(age); //Through the unfulfilled condition
    }
  }

  catch(int CurrentAge){  //write down the stuff executed inresponce to unfulfilled statement
    cout << "You, can't go to club" << endl;
    cout << "Your age: " << CurrentAge << endl;
  }



//Or it could be



  try{
    int age01=17;
    if(age01 >= 18){
        cout << "You can go to club" << endl;  //Check if it's ok
    } else{
        throw 505; //Through the error
    }
  }

  catch(...){  //write down the stuff executed inresponce to unfulfilled statement
    cout << "You, can't go to club" << endl;
  }

   return 0;
}
