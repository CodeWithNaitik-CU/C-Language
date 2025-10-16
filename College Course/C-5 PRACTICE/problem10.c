// Display prime numbers between two numbers
#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    printf("Prime numbers between %d and %d are:\n", a, b);

    for (int num = a; num <= b; num++) {
        int prime = 1;  // assume number is prime
        if (num <= 1) {
            prime = 0; // numbers <= 1 are not prime
        }
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    prime = 0;
                    break;
                }
            }
        }
        if (prime) {
            printf("%d\n", num);
        }
    }

    return 0;
}
