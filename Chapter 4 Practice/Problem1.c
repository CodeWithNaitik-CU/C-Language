// Write a program to print multiplication table of a number n

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number for table : ");
    scanf("%d",&n);
    i = 1;
    while (i<11)
    {
        printf("%d multiply by %d gives %d\n",n,i,n*i);
        i = i+ 1;
    }
    return 0;
}
