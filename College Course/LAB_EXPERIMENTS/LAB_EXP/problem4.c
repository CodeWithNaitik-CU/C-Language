//CREATE A TEMPERATURE CONVERTER THAT TRANSFORMS CELCIUS TO FARENHEIT AND VICE VERSA
#include<stdio.h>

int main() {
    float c, f;
    int choice;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &c);
        f = (c * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", f);
    } 
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) * 5/9;
        printf("Temperature in Celsius: %.2f\n", c);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
