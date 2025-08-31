#include<stdio.h>

int main()
{
    char sentence[100];
    printf("Enter the sentence :");
    scanf("%[^\n]",sentence);
    printf("%s\n",sentence);
    return 0;
}
