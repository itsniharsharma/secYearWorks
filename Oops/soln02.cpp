#include<iostream>
#include<string>
using namespace std;

/* ------------------------------------------------- QUES 01
#include<iostream>
using namespace std;

struct student{
    string name;
    int rollNumb;
    string degree;
    char hostel;
    float cgpa;

     // Function to add details
    void addDetails(string n, int r, string d, char h, float c) {
        name = n;
        rollNumb = r;
        degree = d;
        hostel = h;
        cgpa = c;
    }

    // Function to update details
    void updateDetails(string n, int r, string d) {
        name = n;
        rollNumb = r;
        degree = d;
    }

    // Function to update CGPA
    void updateCGPA(float c) {
        cgpa = c;
    }

    // Function to update hostel
    void updateHostel(char h) {
        hostel = h;
    }

    // Function to display details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNumb << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << cgpa << endl;
    }
};

int main(){
    student student01;

    student01.addDetails("Nihar", 102303012, "Btech", 'C', 8);
    cout << "details are:" << endl;
    student01.displayDetails();
    cout << endl;
    student01.updateDetails("Chirag", 102303003, "Btech");
    cout << "updated details are:" << endl;
    student01.displayDetails();
}

*///----------------------------------------------------------------------------- QUES 02 

/*
class Student {
private:
 
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void updateDetails(string n, int r, string d) {
        name = n;
        rollNo = r;
        degree = d;
    }

public:
   
    void addDetails(string n, int r, string d, string h, float c) {
        name = n;
        rollNo = r;
        degree = d;
        hostel = h;
        currentCGPA = c;
    }

    void updateCGPA(float c) {
        currentCGPA = c;
    }

    void updateHostel(string h) {
        hostel = h;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }

    void updateFullDetails(string n, int r, string d, float c, string h) {
        updateDetails(n, r, d); // Call private function
        updateCGPA(c);
        updateHostel(h);
    }
};


int main() {
    Student student1;

    student1.addDetails("John Doe", 101, "B.Tech CSE", "Hostel A", 8.5);

    cout << "Initial Details:" << endl;
    student1.displayDetails();
    cout << endl;

    // student1.updateDetails("Kartik", 20, "Mtech")
    // student1.displayDetails();
    // cout << endl;

  
    student1.updateFullDetails("John Smith", 101, "B.Tech ECE", 9.0, "Hostel B");

    cout << "Updated Details:" << endl;
    student1.displayDetails();

    return 0;
}

*/

//------------------------------------------------------ QUES 03 

/*
class mySecret {
    private: 

    string secret;

    void secretOpen(){
        cout << "secret is: "<< secret <<endl;
    }

    public:

    void setSecret(string s){
        secret= s;
        secretOpen();
    }
};

int main(){
    mySecret untoled;
    untoled.setSecret("I am learning Oops");

}
*/


//Try to understand what we did: 
/*
- created a class
- make a private area 
- declared secret string 
- set an inbuilt function to open the secret! 

- Now, we called private function in public function! 
- What's the actual beauty of private function? 
- They are called within the class only
- Inspite directly calling the secretOpen() function in main class, i called setSecret()
- secretOpen() was encapsulated inside setSecret()

- Conclusion 
- Private functions are called within class only, 
- It can't be directly called within main() function 
- We need to put a wrapper of different function to call it in main() fun
*/

//---------------------------------------------------------- QUES 04

/*
class Rectangle{
    int width; 
    int height; 

    public:
    void getData(int w, int h){
        width = w; 
        height = h;

        calculateArea();
    }

    private: 
    void calculateArea(){
        int area= width*height;
        cout<< "area is:" << area <<endl;
    }
};

int main(){

    Rectangle myRec;
    myRec.getData(2, 3);
}
*/

/*
- Its also a good example of encapsulation 
- Created rectangle 
- Note: bydefault without specifying every class is private 
- Called a private function in public fun and then, calling public function to main()
*/

//------------------------------------------------------- QUES 05

/*
class complex{
    float real;
    float imaginary;
    
public:
    void setComplex(float r, float i){
        real = r;
        imaginary = i;
    }

    void displayComplexAndItsSum(){
        cout<< " real is: " << real << " imaginary is: " << imaginary <<endl;
        float sum = Sum(); 
        cout << "sum is: "<< sum <<endl;
    }

private:
    float Sum(){
       return real + imaginary;
    }
};

int main(){

    complex aNumber;
    aNumber.setComplex(2.0, 3.0);
    aNumber.displayComplexAndItsSum();
   
}

//Think over the above 

*/
//--------------------------------------------------- QUES 06

/*
class rectangle{
    int width, height;

public: 
    void setDimension(int w, int h);
    int  calculateArea();
};

//Defining the function outside the class 

void rectangle :: setDimension(int w, int h){
    width = w;
    height = h;
};

int rectangle :: calculateArea(){
    return width*height;
};

int main(){
    rectangle rec01;
    rec01.setDimension(2, 3);
    cout << "area is: "<< rec01.calculateArea() << endl;
}

*/

//--------------------------------
/*
int value = 100;  //global variable 

int main(){

    int value = 98;   //declaring variable with same name in locals 
    cout << value << endl;  //this access local value 
    cout << ::value << endl; //this access global value

    return 0;
}
*/
//--------------------------------
//accessing static variable

/*
class counter {
public: 
    static int count; 

    void increment(){
        count++;
    }

    static void showCount(){
        cout << "Count: " << count << endl;
    }
};

int counter :: count = 0;

int main(){
   counter c1, c2;
   c1.increment();
   c2.increment();

   counter :: showCount();
   
   //  - If i remove static from static void showCount
   //  - I need to call it in main func like:
   //  - c1.showCount()
   //  - c2.showCount()
   

   return 0;
}

*/

/*
  - What does a static do? 
  - It create instant of somthing written ahead of it.
  - Like, we did static int count;
  - and count is updated by void increment();
  - if any of the object of counter class increment the count 
  - It will be reflected in all other created objects! 
*/

//----------------------------------------------
/*
class counter{
public: 
    static int count;

    void increment(){
        count++;
    }

    void currentCount(){
        cout << "count is: " << count <<endl;
    }
};

int counter :: count = 0;

int main(){
    counter c1, c2;
    c1.increment();
    
    c1.currentCount();
    c2.currentCount();  //see, it also count=1 
}

//Always remembar, if a static variable is declared inside class
//Its initialisation can't be done inside the class
//we have to initialise it outside the class using ::

*/
//------------------------------------------------------

//say if we don't use using namespace std;
//we have to do like: 

/*
int main(){
    int number;

    std:: cout << "enter a number:" <<endl;
    std:: cin  >> number;

    std:: cout << "you entered: " << number <<std::endl;
    return 0;
}
*/

//---------------------------------------------------------

namespace firstNamespace{

    int value = 10;

    void displayValue(){
        cout << " value for 1st namespace is: "<< value <<endl;
    }
}

namespace secondNamespace{
     
     int value = 20;
    
     void displayValue(){
        cout << "value for 2nd namespace is: "<< value << endl;
     }
}

int main(){

    firstNamespace :: displayValue();
    secondNamespace :: displayValue();

    cout << "Value directly from firstNamespace: " << firstNamespace::value << endl;
    cout << "Value directly from secondNamespace: " << secondNamespace::value << endl;

    return 0;
}

/*
- what do u understand? 
- what is basi cdifference between a class and namespace? 

- A namespace is primarily used to organize and group related identifiers 
 (such as variables, functions, classes, etc.) to avoid name conflicts, especially
 in large projects or when using multiple libraries.

- Just like value is a variable common in both namespaces, but it avoided conflict! 

-  Namespaces do not have private, protected, or public access specifiers like classes do. 
   Everything in a namespace is accessible directly (using the namespace's scope).


Aspect	                               Namespace	                                              Class
Purpose	                  Organize code and avoid name conflicts	                    Define blueprints for creating objects
Instantiation	          Cannot be instantiated	                                    Can be instantiated (objects created)
Access Control	          No access control (everything is accessible)	                Access control through private, protected, public
Encapsulation	          No encapsulation	                                            Encapsulates data and behavior
Member Functions	      Can contain functions, but they aren’t member functions	        Has member functions
Use Case	              Avoiding naming conflicts, grouping related code logically	        Implementing OOP concepts, creating objects


-  Use namespaces to group related functions, variables, 
   and classes into a logical module, particularly to avoid name clashes 
   in large projects or when integrating third-party libraries.
*/