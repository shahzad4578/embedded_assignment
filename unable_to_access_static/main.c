#include <stdio.h>
#include <stdlib.h>

extern float pi;


int main(){
    printf("the value of pi is %.2f\n", pi);
    return 0;
}

// it shows the following error:
// warning: ‘pi’ defined but not used [-Wunused-variable]
//     4 | static float pi = 3.14;
//       |              ^~
// gcc -Wall -Wextra -pedantic -std=c99 -o main main.o math.o
// /usr/bin/ld: main.o: warning: relocation against `pi' in read-only section `.text'
// /usr/bin/ld: main.o: in function `main':
// main.c:(.text+0xc): undefined reference to `pi'
// /usr/bin/ld: warning: creating DT_TEXTREL in a PIE

// The reason for this error is that pi is defined as static global variable 
// for math.c only not for main, so it can not be called from there because 
// of its static nature.

