// File: prime_check.c
// Description: Program to check whether a number is prime or not

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for valid input
    if (num <= 1) {
        isPrime = 0;  // 0 and 1 are not prime numbers
    } else {
        // Check from 2 to sqrt(num) for factors
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
