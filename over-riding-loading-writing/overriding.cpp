#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Base{
    public:
        virtual void printHello();
        virtual void virtualPrint();
        virtual void printHello(const string &);
};
void Base::printHello(){
    cout << "Base hello" << endl;
}
void Base::printHello(const string &name){
    cout << "Base Hello to " << name << endl;
}
void Base::virtualPrint(){
    cout << "Base virtual print" << endl;
}

class Derived : public Base{
    void printHello(const string &);
    void virtualPrint();
};
void Derived::printHello(const string &name){cout << "Derived hello to " << name << endl;}
void Derived::virtualPrint(){cout << "Derived virtual print" << endl;}

int main(int argc, char const* argv[])
{
    Base *b = new Derived;
    b->printHello();
    b->Base::printHello("jasmine");
    b->printHello("Jasmine");
    b->Base::virtualPrint();
    b->virtualPrint();

    return 0;
}
