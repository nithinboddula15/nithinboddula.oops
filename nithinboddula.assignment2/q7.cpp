#include <iostream>
using namespace std;

class Sort {
    int a[5];
public:
    void get(){
        for(int i=0;i<5;i++)
            cin>>a[i];
    }

    void bubble(){
        for(int i=0;i<5;i++){
            for(int j=0;j<4-i;j++){
                if(a[j]>a[j+1]){
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
    }

    void show(){
        for(int i=0;i<5;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
};

int main(){
    Sort s;
    s.get();
    s.bubble();
    s.show();
}
