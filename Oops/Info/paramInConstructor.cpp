#include<iostream>
using namespace std;

class base {
    protected:
    int i;
    public:
    base(int x){
        i=x;
        cout<<"const base"<<endl;
    }

    ~base(){
        cout<<"dest base"<<endl;
    }
};

class derived: public base {
    int j;
    public:
    derived(int x, int y):base(y){
        j=x;
        cout<<"derived const"<<endl;
    }

    ~derived(){
        cout<<"des derived"<<endl;
    };

    void show(){
        cout<<i<<" "<<j<<endl;
    }
};

int main(){
    derived ob(3,4);
    ob.show();
    return 0;
}

