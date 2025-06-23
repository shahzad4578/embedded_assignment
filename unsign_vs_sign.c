#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int n = 0;
    int num;

    typedef struct odata2{
        unsigned int uvar : 8;
        int iver : 8;
    } odata2;

    srand(time(NULL)); // Seed the random number generator
    printf("Enter the number of iterations: ");
    scanf("%d", &num);
    odata2 data2;
    while(n<num){
        printf("Iteration %d:\n", n + 1);
        int a = rand() % (256) - 128;
        int b = rand() % 256;
        data2.uvar = a;
        data2.iver = a;
        if (a != data2.uvar) {
            printf("Error: uvar value %d is out of range (0-255)\n", a);
        } else {
            printf("uvar: %u\n", data2.uvar);
        }
        if (data2.iver != a) {
            printf("Error: iver value %d is out of range (-128 to 127)\n", data2.iver);
        } else {
            printf("iver: %d\n", data2.iver);
        }
        data2.uvar = b;
        data2.iver = b;
        if (b != data2.uvar) {
            printf("Error: uvar value %d is out of range (0-255)\n", b);
        } else {
            printf("uvar: %u\n", data2.uvar);
        }
        if (data2.iver != b) {
            printf("Error: iver value %d is out of range (-128 to 127)\n", b);
        } else {
            printf("iver: %d\n", data2.iver);
        }
        n++;

    }

    return 0;
}