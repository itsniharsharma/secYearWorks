#include<iostream>
#include<iomanip>
using namespace std;


//----------------- QUES 01 

/*
#include<iostream>
using namespace std;

int main(){
cout << "Hello World" <<endl;
}
*/


//Some of the basic questions arn't discussed

/*
\n: Moves the cursor to the next line.
\t: Inserts a horizontal tab space.
\b: Moves the cursor back by one character, effectively acting as a backspace.
endl: Inserts a newline and flushes the output buffer, ensuring all output is printed immediately.
setw: Sets the width of the next output field. It requires including the <iomanip> header.
*/

/*
int main(){
    cout << "Numbers with setw:\n";
    cout << setw(5) << 1 << "\n";
    cout << setw(5) << 22 << "\n";
    cout << setw(5) << 333 << "\n";
    cout << setw(5) << 4444 << "\n";
    cout << setw(5) << 55555 <<endl;
}
*/

//-------------------------------- QUES 7

int main() {
    int a = 5, b = 10;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Swapping using bitwise XOR
    a = a ^ b; // Step 1
    b = a ^ b; // Step 2
    a = a ^ b; // Step 3

    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}