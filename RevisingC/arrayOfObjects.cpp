#include<iostream>
using namespace std;

class junk {
public:
string type;
int quantity;

    junk(string t, int q): type(t), quantity(q){}

    void display(){
        cout << type << "+" << quantity << endl;
    }
};


int main(){
    junk junkFood[3]={
        junk("chips", 10),
        junk("choco", 2),
        junk("toffe", 5)
    };

    for(int i=0; i<3; i++){
       junkFood[i].display();
    }
    return 0;
}