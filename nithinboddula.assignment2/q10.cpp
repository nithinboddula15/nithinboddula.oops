#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area()=0;
};

class Circle : public Shape {
    float r;
public:
    Circle(float x){ r=x; }
    float area(){ return 3.14*r*r; }
};

class Square : public Shape {
    float a;
public:
    Square(float x){ a=x; }
    float area(){ return a*a; }
};

int main(){
    Shape *c=new Circle(3);
    Shape *s=new Square(5);
    cout<<"Circle: "<<c->area()<<endl;
    cout<<"Square: "<<s->area()<<endl;
}
