#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Melange{
    public:
        Melange(const string &name);
    private:
        string name_;
};

// this is called initialization:
Melange::Melange(const string &name):name_(name){}

// while this is called assignment, cause it first calls the constructor of class String, and then assign a new value to it.
//Melange::Melange(const string &name){
    //name_ = name;
//}

int main(int argc, char const* argv[])
{
    Melange test("This is a test");
    return 0;
}
