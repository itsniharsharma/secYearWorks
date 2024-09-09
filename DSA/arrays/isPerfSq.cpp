#include<iostream>
using namespace std;

bool isPerfect(int n){

    int i=1;

    while(i*i <= n){
        if(i*i == n){
            return true;
        } 
        i++;
    }

    return false;
}

int main(){
    if(isPerfect(25)){
        cout << "perfect" << endl;
    } else{
        cout << "not perfect" << endl;
    }
    return 0;
}

