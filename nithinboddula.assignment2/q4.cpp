#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n){
        name = n;
    }
};

class Employee : public Person {
protected:
    int id;
public:
    void setId(int i){
        id = i;
    }
};

class Manager : public Employee {
    string dept;
public:
    void setDept(string d){
        dept = d;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Dept: "<<dept<<endl;
    }
};

int main(){
    Manager m;
    m.setName("Akhil");
    m.setId(1001);
    m.setDept("Finance");
    m.show();
}
