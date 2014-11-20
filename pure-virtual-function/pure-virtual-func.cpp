#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

class Base{
    public:
        virtual void display() = 0;
        virtual void show();
    private:
        string _data;
};
inline void Base::display(){
    cout << "This is base display" << endl;
}
void Base::show(){
    cout << "This is base show func " << endl;
}

class Derived : public Base{
    public:
        void display();
        //void show();
    private:
        int _level;
};

//void Derived::show(){
    //cout << "This is derived show func " << endl;
//}
void Derived::display(){
    cout << "This is derived class display " << endl;
    cout << " level is: " << _level << endl;
}

int main(int argc, char const* argv[])
{
    Derived *b = new Derived;
    b->show();
    b->Base::show();

    b->display();
    b->Base::display();

    return 0;
}
