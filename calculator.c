#include <stdio.h>
void add(int a, int b){
    printf("%d\n",a + b);
}

void sub(int a, int b){
    printf("%d\n",a - b);
}

void multiply(int a , int b){
    printf("%d\n",a * b);
}

void divide(int a, int b){
    if(b==0){
        printf("error");
        return;
    }
    float c = a/(float)(b);
    printf("%f\n", c); 
}

int main(){
    int flag = 1;
    printf("to exit press e\n");
    while(flag){
        int a, b;
        printf("enter a number : ");
        scanf("%d", &a);
        printf("enter a second number : ");
        scanf(" %d", &b);
        printf("enter choice of operation i.e : +, -, *, /, e -> ");
        char q ;
        scanf(" %c", &q);
        switch(q){
            case('+'):
                add(a, b);
                break;
            case('-'):
                sub(a,b);
                break;
            case('*'):
                multiply(a,b);
                break;
            case('/'):
                divide(a,b);
                break;
            case('e'):
                flag = 0;
                break;
            default:
                printf("wrong operation\n");
        }
    }
    return 0;
}