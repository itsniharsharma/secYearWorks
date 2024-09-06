/*
why using namespace ?
might have multiple func
that have same name etc...

namespace allows u to group related code together and avoid name conflicts 
*/

#include<iostream>
using namespace std;

namespace first {
    void sayHello(){
       cout << "hello from first" << endl;
    }
}

namespace sec {
    void sayHello(){
      cout << "hello from sec" << endl;
    }
}

namespace third {
     void sayHello(){
      cout << "hello from third" << endl;
    }
}

namespace outer {
    namespace inner {
        void display(){
            cout << "I am inside " << endl;
        }
    }
}

int main(){

    first::sayHello();
    sec::sayHello();

    using namespace third;
    sayHello();

    outer::inner::display();

    return 0;
}

/*
Namespaces in C++ provide a way to group related code and prevent name conflicts in large projects.
Declaring a namespace: Use the namespace keyword followed by the name.
Accessing members: Use the scope resolution operator ::.
Using using: You can bring the entire namespace or specific members into the current scope using using.
Nested namespaces: Namespaces can be nested, and you can access members using the full scope.
*/
