//Write a program to print all the prime numbers from 1 to n
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if(num <= 1)
        return false;
    if(num == 2)
        return true;
    if(num % 2 == 0)
        return false;

    for(int i = 3; i * i <= num; i += 2) {
        if(num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    for(int i = 2; i <= n; i++) {
        if(is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
