#include<iostream>

using namespace std;

class stack{
int cap;
int* arr;
int top;

public:
stack(int c){
    this->cap = c;
    arr = new int[c];b
    this->top = -1;
}

void push(int data){
    this->top++;
    this->arr[this->top] = data;
}

void pop(){
   if(this->top =-1){
      cout << "underflow\n";
      return;
   } else{
      this->top --;
   }
}

int getTop(){
    //element on top
    cout << this->arr[this->top] << endl;
}

bool isEmpty(){
    return this->top == -1;
}

int size(){
    return this->top +1;
}

bool isFull(){
    return this->top == this->cap -1;
}
};

int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.getTop() << endl;

    return 0;
}