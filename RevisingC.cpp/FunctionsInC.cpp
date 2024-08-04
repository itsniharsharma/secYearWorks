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

int main(){
    myFunction();  //India
    myFunction("USA"); //USA

    //Passing arrays as parameter
    int arr01[]= {2,3,5,6,7};
    countEle(arr01, 5);

    return 0;

}




