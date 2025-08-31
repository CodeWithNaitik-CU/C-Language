//CHECK VOWEL AND CONSONANT
#include<stdio.h>
int main()
{
    char a;
    printf("Enter the alphabet :");
    scanf("%c",&a);
    if (a == 'a' || a == 'e' || a =='i' || a == 'o' || a == 'u')
    {
        printf("it is a vowel !!");
    }
    else
        printf("It is a consonant !!");
    return 0;
}
