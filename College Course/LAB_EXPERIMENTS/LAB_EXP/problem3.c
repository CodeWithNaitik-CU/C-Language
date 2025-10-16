//DESIGN A TESTER THAT DISPLAYS RESULTS OF ALL THE ARITHMETIC,RELATIONAL AND LOGICAL OPERATORS
#include<stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n-----------------------------\n");
    printf("     ARITHMETIC OPERATORS\n");
    printf("-----------------------------\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("\n-----------------------------\n");
    printf("     RELATIONAL OPERATORS\n");
    printf("-----------------------------\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    printf("\n-----------------------------\n");
    printf("      LOGICAL OPERATORS\n");
    printf("-----------------------------\n");
    printf("(a && b) : %d\n", a && b);
    printf("(a || b) : %d\n", a || b);
    printf("!(a && b): %d\n", !(a && b));

    printf("\n-----------------------------\n");
    printf("        END OF TEST\n");
    printf("-----------------------------\n");

    return 0;
}
