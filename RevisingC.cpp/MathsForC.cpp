#include<iostream>
#include <cmath> //fun like sqrt, log, etc... are here 
#include<string>
using namespace std;

int main(){
    cout << max(5, 10) << endl; //10
    cout << min(5, 10) << endl; //5

    cout << sqrt(64) << endl;
    cout << round(2.4) << endl;
    cout << log(2) << endl;

    int time =20;
    string greet= (time < 18) ? "Good Morning" : "Good evening";
    cout << greet << endl;

    string names[] = {"Nihar", "Pratham", "Divyam", "Rohit"};
    for(string element : names){  //enhanced for loop
         cout << element << endl;
    }

    int lengthOfnames= sizeof(names)/sizeof(names[0]);

     for(int i=0; i<lengthOfnames; i++){  
         cout << names[i] << endl;
    }

    return 0;    
}