//CHECK UPPERCASE AND LOWERCASE ALPHABET
#include<stdio.h>
int main()
{
    char a;
    printf("Enter the alphabet to check for : ");
    scanf("%c",&a);
    if (a>='A' && a<='Z')
    {
        printf("it is an uppercase alphabet");
    }
    else if (a>='a' && a<='z')
    {
        printf("It is an lowercase alphabet");
    }
    else
    printf("ALPHABET NOT RECOGNIUSED ");
    
    return 0;
}
