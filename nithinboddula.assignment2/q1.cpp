#include <iostream>
using namespace std;

class SimpleList {
private:
    int arr[100];
    int size;
public:
    SimpleList() : size(0) {}
    void add(int value) {
        if (size < 100) arr[size++] = value;
    }
    void remove() {
        if (size > 0) size--;
    }
    void display() const {
        if (size == 0) { cout << "List is empty\n"; return; }
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }
    int getSize() const {
        return size;
    }
};

int main() {
    SimpleList list;
    list.add(10);
    list.add(20);
    list.add(30);
    list.display();
    cout << "Size: " << list.getSize() << endl;
    list.remove();
    list.display();
    return 0;
}
