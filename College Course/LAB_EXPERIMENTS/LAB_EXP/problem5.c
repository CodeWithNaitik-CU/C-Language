//IMPLEMET A MENU DRIVEN CALCULATOR USING SWITCH CASE FOR MULTIPLE ARITHMETIC OPERATIONS
#include<stdio.h>

int main() {
    float a, b, result;
    int choice;

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\n------ MENU ------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = a + b;
            printf("Result = %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Result = %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Result = %.2f\n", result);
            break;
        case 4:
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero not allowed!\n");
            break;
        case 5:
            printf("Result = %d\n", (int)a % (int)b);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
