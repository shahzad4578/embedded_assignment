#include <stdio.h>
#include <stdlib.h>

static int var = 2;
int* ptr = &var;
void print(int *ptr){
    printf("the value of the variable var is %d\n", *ptr);
}

int callback(){
    return var;
}