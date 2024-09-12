#include<iostream>
#include<stack>
using namespace std;

int main(){
    queue<int> q1;
    queue<int> q2;

    q1.push(4);
    q1.push(7);
    q1.push(11);
    q1.push(20);
    q1.push(5);
    q1.push(9);
 
    int n= q1.size();
    for(int i=0; i<n/2; i++){
        q2.push(q1.top());
        q1.pop();
    }

    return 0;
}