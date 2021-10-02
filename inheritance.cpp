#include <iostream>
using namespace std;

class base{
    public:
    virtual void vfunc(){
        cout<<"This is base \n";
    }
};

class derived:public base{
    public:
    void vfunc(){
        cout<<"Thid id derived \n";
    }
};

int main(){
    base *b;
    derived d;
    b=&d;
    b->vfunc();
    d.vfunc();
    return 0;
}
