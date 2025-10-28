#include <iostream>
using namespace std;

class Shape {
protected:
    float length, width;
public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }
};

class Rectangle : public Shape {
public:
    float area() {
        return length * width;
    }
    float perimeter() {
        return 2 * (length + width);
    }
    void display() {
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(10, 5);
    rect.display();
    return 0;
}
