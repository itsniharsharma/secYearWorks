#include<iostream>
using namespace std;

class member {
    string gender;
    int age;
    public:
    void getData(){
        cin >> gender;
        cin >> age;
        cout << "gender: " << gender << endl;
        cout << "age: " << age << endl;
    }
};

class student : public member {
    string level;
    public:
    void getStdData(){
        member :: getData();
        cin >> level;
        cout << "level: " << level << endl;
    }
};

class staff : public member {
    int salary;
    public:
    void getStaffData(){
        member::getData();
        cin >> salary;
        cout << "salary: " << salary << endl;
    }
};

int main(){
    student s;
    staff e;
    s.getStdData();
    e.getStaffData();
    return 0;
}

