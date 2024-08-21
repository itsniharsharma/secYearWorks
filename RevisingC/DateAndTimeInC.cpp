#include<iostream>
#include<ctime>  //The <ctime> library allows us to work with dates and times.
using namespace std;

int main(){
    time_t timestamp;
    time(&timestamp);

    //Display TimeStamp
    cout << ctime(&timestamp);
    return 0;
}
