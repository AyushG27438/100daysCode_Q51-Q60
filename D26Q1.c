//Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345
#include <stdio.h>

int main() {
    int i, j, spaces;

    for(i = 1; i <= 5; i++) {
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");
        }

        for(j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
