// CHECK WHETHER USER INPUT IS LOWERCASE OR NOT !!
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the Character : ");
    scanf(" %c",&c);
    if (c>='a' && c<='z')
    {
        printf("User input is lowercase");
    }
    else
    {
        printf("User input is Uppercase");
    }
    return 0;
}
