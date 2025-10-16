// CHECK WHETHER THE NUMBER IS EVEN/ODD,PRIME OR A PALINDROME
#include<stdio.h>

int main() {
    int n, i, flag = 0, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);

    if (n <= 1)
        flag = 1;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        printf("%d is Prime\n", n);
    else
        printf("%d is not Prime\n", n);

    temp = n;
    while (temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    if (rev == n)
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is not a Palindrome\n", n);

    return 0;
}
