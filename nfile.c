#include <stdio.h>
#include "app.h"
#include <stdlib.h>
#include <time.h>

int main(){
    int n = 0;
    int num;
    srand(time(NULL)); // Seed the random number generator

    odata data;

    // Print the size of the structure  
    printf("Size of odata structure: %zu bytes\n", sizeof(data));
    printf("Enter the number of iterations: ");
    scanf("%d", &num);

    while(n < num) {
        int a = rand() % 256; // Generate a random value for ivar (0-255)
        data.ivar = a;
        char b = rand() % 6; // Generate a random value for cvar (0-5)
        data.cvar = b;
        float c = (rand()) / 10.0; 
        data.fvar = c;
        printf("Iteration %d:\n", n + 1);
        if(data.ivar != a){
            printf("Error: ivar value %d does not fit in 8 bits\n", a);
            printf("The value of ivar that gets stored is %d\n", data.ivar);
        } else {
            printf("ivar: %d\n", data.ivar);
        }

        if(data.cvar != b){
            printf("Error: cvar value %d does not fit in 2 bits\n", b);
            printf("Error: cvar value %d is out of range (0-5)\n", data.cvar);
        } else {
            printf("cvar: %d\n", data.cvar);
        }

        if(data.fvar != c){
            printf("Error: fvar value %.2f is out of range (0.0-99.9)\n", data.fvar);
        } else {
            printf("fvar: %.2f\n", data.fvar);
        }

        n++;
    }

    return 0;

}
