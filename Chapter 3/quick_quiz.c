// Write a program to find grade of a student 
#include<stdio.h>
int main()
{
    int grade ;
    printf("Enter your marks : ");
    scanf("%d",&grade);
    if (90<=grade && grade<100)
    {
        printf("YOU GOT A GRADE");
    }
    else if (80<=grade && grade<90)
    {
        printf("YOU GOT B GRADE");
    }
    else if (70<=grade && grade<80)
    {
        printf("YOU GOT c GRADE");
    }
    else if (60<=grade && grade<70)
    {
        printf("YOU GOT D GRADE");
    }
    else if (50<=grade && grade<60)
    {
        printf("YOU GOT E GRADE");
    }
    else
    {
        printf("YOU GOT FAILED AND GOT F GRADE ");
    }
    
    
    return 0;
}
