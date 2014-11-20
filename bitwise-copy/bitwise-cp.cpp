#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

const int name_size = 1024;
// elements in arrays[] in struct/class will be copied automatically by default copy constructor, this is called bitwise copy
typedef struct pod{
    char name[name_size];
    int grade;
    size_t seq;
}POINTER_TEST;

// while obj pointed by a pointer in struct will not be copied, only the address of the pointer will be copied..
typedef struct pointer_test{
    char *name;
    int grade;
    size_t seq;
} POD;

int main(){
    char name[] = "This is my place, my house";

    POD pod1;
    pod1.name = (char *)malloc(sizeof(name)+1);
    memcpy(pod1.name, name, sizeof(name));
    pod1.grade = 10;
    pod1.seq = 1;

    cout << "POD1 name: " << pod1.name << endl;
    printf("pod1 name address: %x \n", pod1.name);

    POD pod2;
    pod2.name = (char *)malloc(sizeof(name)+1);
    pod2 = pod1;
    cout << "POD2 name: " << pod2.name << endl;
    printf("pod2 name address: %x \n", pod2.name);

    pod1.name[0] = 'J';

    cout<< "POD1 name after mod: " << pod1.name << endl;
    cout << "POD2 name after mod: " << pod2.name << endl;

    free(pod1.name);
    free(pod2.name);
    return 0;
}

