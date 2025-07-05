#include <stdio.h>
#include <stdlib.h>

extern int var;
extern int* ptr;
extern int callback();
void print(int *ptr);

int main(){
    // method 1 using non static pointer
    print(ptr);
    // method 2 by using function to return value
    printf("the value of variable is %d\n", callback());
    return 0;
}

