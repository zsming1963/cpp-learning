#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
    char *px = 0;
    char &rc = *px;
    printf("address of px: %x \n", px);
    // printf("value of px: %s \n", px);

    printf("address of rc: %x \n", &rc);
    // printf("value of rc: %s \n", rc);

    int i = 0;
    printf("i++++ is：%d \n", (i++));

    return 0;
}
