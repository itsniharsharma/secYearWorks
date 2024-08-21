#include <iostream>
using namespace std;

int main(){

    cout << "Hello World!" << endl;
    cout << "I am learning c++" << endl;
    const int myNum=15;
    cout << myNum << endl;

    string firstName= "Nihar";
    string lastName= "Sharma";

    string fullName= firstName.append(lastName);
    cout << fullName << endl;

    cout << fullName.length() << endl;
    cout << fullName[0] << endl; //N
    cout << fullName.at(0) << endl; //N

    // string myFriendName;
    // cout << "Enter name of your friend :" << endl;
    // getline(cin, myFriendName);
    // cout << "Name of your friend is: " << myFriendName <<endl;
    //Not able to cin >> input

    


    return 0;


}