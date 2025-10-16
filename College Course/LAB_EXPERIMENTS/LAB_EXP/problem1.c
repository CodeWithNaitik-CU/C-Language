//DEVELOP A PROFILE SCREEN THAT PRINTS NAME,AGE AND BASIC INFO OF A STUDENT 

#include<stdio.h>

int main() {
    char name[50];
    int age;
    char info[100];

    printf("Enter your name: ");
    gets(name);

    printf("Enter your age: ");
    scanf("%d", &age);

    getchar();

    printf("Enter your basic info: ");
    gets(info);

    printf("\n----------------------------\n");
    printf("      STUDENT PROFILE\n");
    printf("----------------------------\n");
    printf("Name       : %s\n", name);
    printf("Age        : %d\n", age);
    printf("About Me   : %s\n", info);
    printf("----------------------------\n");

    return 0;
}
