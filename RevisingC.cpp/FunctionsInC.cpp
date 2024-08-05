#include<iostream>
using namespace std;

  //Assigning default parameter
   void myFunction(string country= "India"){ //Dons't mean we assigned it a fix value, it says if nothing passed, just return default India
       cout << country << endl;
   }

   void countEle(int numArray[], int size){
      for(int i=0; i<size; i++){
        cout << numArray[i] << endl;
      }
   }

   //There is a concept of function overloading, 
   //using it, we can use functions with similar names but different parameters, as
   int function01(int x);
   float function01(float x);
   double functio01(double x, double y);  //such practice provides flexibility andenhance readability
  //Instead of defining two functions that should do the same thing, it is better to overload one.

int main(){
    myFunction();  //India
    myFunction("USA"); //USA

    //Passing arrays as parameter
    int arr01[]= {2,3,5,6,7};
    countEle(arr01, 5);

    return 0;

}




