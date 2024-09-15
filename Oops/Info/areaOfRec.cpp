#include<iostream>
using namespace std;

class rect{
    int len,bre;
    public:
    void setData(int x, int y): len(x), bre(y){}
    void showArea(){
        cout << len*bre << endl;
    }
};

int main(){
    rect rectArray[2];
    for(int i=0; i<2; i++){
        rectArray[i].setData();
    }
     for(int i=0; i<2; i++){
        rectArray[i].showArea();
    }
    return 0;
}