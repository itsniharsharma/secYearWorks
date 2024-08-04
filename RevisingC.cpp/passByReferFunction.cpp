#include<iostream>
using namespace std;

void swapnums(int &x, int &y){ //Dont pass by value (x, y) insted, pass by reference(&x, &y)
    int z=x;
    x=y;
    y=z;
}

int main(){
    int firstNum= 10;
    int secNum= 20;
    //Before swap:
    cout << firstNum <<" " << secNum << endl;
    //swaping nums
    swapnums(firstNum, secNum);
    //after swap
    cout << firstNum <<" " << secNum <<endl;
    return 0;
}

//By this we can even pass by reference 

// Pass by Reference is beneficial for efficiency (avoiding unnecessary copies), modifying arguments directly, and working with large data types or objects.
// Pass by Value can be less efficient for large data structures and doesn't allow modification of the original arguments.