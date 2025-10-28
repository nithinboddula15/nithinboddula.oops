 #include <iostream>
using namespace std;

class Sports;

class Student {
    int marks;
public:
    Student(int m){ marks = m; }
    friend void total(Student s, Sports sp);
};

class Sports {
    int score;
public:
    Sports(int s){ score = s; }
    friend void total(Student s, Sports sp);
};

void total(Student s, Sports sp){
    cout<<"Total = "<<s.marks + sp.score<<endl;
}

int main(){
    Student s1(85);
    Sports sp1(12);
    total(s1, sp1);
}
