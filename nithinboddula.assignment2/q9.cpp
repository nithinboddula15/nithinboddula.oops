#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double bal;
public:
    BankAccount(string n,double b){
        name=n;
        bal=b;
    }

    void deposit(double amt){
        bal+=amt;
    }

    void withdraw(double amt){
        if(amt<=bal)
            bal-=amt;
    }

    void show(){
        cout<<name<<" -> "<<bal<<endl;
    }
};

int main(){
    BankAccount b1("Kiran",1500);
    b1.deposit(300);
    b1.withdraw(100);
    b1.show();
}
