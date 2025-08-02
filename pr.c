#include <stdio.h>

int main() {
    int num;
printf("Enter a positive integer: ");
    scanf("%d", &num);
if (num < 2) {
        printf("%d is not a prime number.\n", num);
    } else {
        int i, isPrime = 1;

