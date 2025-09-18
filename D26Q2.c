/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*
*  */
#include <stdio.h>

void print_stars(int count) {
    for(int i = 0; i < count; i++) {
        printf("*\n");
    }
}

int main() {
    print_stars(4);
    printf("\n");
    print_stars(5);
    printf("\n");
    print_stars(3);
    printf("\n");
    print_stars(1);

    return 0;
}
