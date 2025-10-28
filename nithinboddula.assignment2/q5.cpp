#include <iostream>
using namespace std;

class Person {
public:
    void show(){
        cout<<"Person class"<<endl;
    }
};

class Player {
public:
    void show(){
        cout<<"Player class"<<endl;
    }
};

class SportsPerson : public Person, public Player {
public:
    void display(){
        Person::show();
        Player::show();
    }
};

int main(){
    SportsPerson sp;
    sp.display();
}
