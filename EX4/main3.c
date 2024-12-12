/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    for (int i = 1, j= 0 ;i<=9;) {
        printf("%d*%d=%d\t", i,j,i*++j);
        if (j == 9) {
            i++;
            j=0;
			printf("\n");
        }
    }
    return 0;
}
