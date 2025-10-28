#include <iostream>
using namespace std;

class Shape {
public:
    void area(int r){
        cout << "Circle area: " << 3.14 * r * r << endl;
    }
    virtual void print(){
        cout << "Shape class" << endl;
    }
};

class Rectangle : public Shape {
public:
    // Bring base class area() into scope
    using Shape::area;

    void area(int l, int b){
        cout << "Rectangle area: " << l * b << endl;
    }

    void print(){
        cout << "Rectangle class" << endl;
    }
};

int main(){
    Rectangle r;
    r.area(4);      // Calls Shape::area()
    r.area(4,5);    // Calls Rectangle::area()
    Shape *p = &r;
    p->print();
}
