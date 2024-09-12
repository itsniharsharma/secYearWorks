#include<iostream>
#include<queue>
#include<stack>
using namespace std;


struct Queue {

        stack<int> s1; 
        stack<int> s2;
    
    void enqueue(int x){
        while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
       }

        s1.push(x);

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int dequeue(){
        if(s1.empty()){
            return -1;
        }

        int x = s1.top();
        s1.pop();
        return x;
    }
};


int main(){
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);

    for(int i=0; i<3; i++){
        cout << q1.dequeue() << endl;
    }
    return 0;
}

