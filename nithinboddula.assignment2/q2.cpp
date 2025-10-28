#include <iostream>
#include <string>
using namespace std;

class MyDictionary {
private:
    string keys[100];
    string values[100];
    int size;
public:
    MyDictionary() : size(0) {}
    void insert(string key, string value) {
        if (size < 100) {
            keys[size] = key;
            values[size] = value;
            size++;
        }
    }
    void search(string key) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                cout << "Value: " << values[i] << endl;
                return;
            }
        }
        cout << "Key not found" << endl;
    }
    void display() const {
        if (size == 0) {
            cout << "Dictionary is empty" << endl;
            return;
        }
        for (int i = 0; i < size; i++) cout << keys[i] << " => " << values[i] << endl;
    }
};

int main() {
    MyDictionary dict;
    dict.insert("name", "Alice");
    dict.insert("age", "21");
    dict.insert("city", "Chennai");
    dict.display();
    dict.search("age");
    dict.search("country");
    return 0;
}
