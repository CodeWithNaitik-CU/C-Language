#include<stdio.h>
void namaste();
void bonjour();
int main()
{
    char s;
    printf("Are you an indian or french --- i/f ");
    scanf("%c",&s);
    if (s == 'i')
    {
        namaste();
    }
    else if (s == 'f')
    {
        bonjour();
    }
    else
        printf("Wrong input ");
    return 0;
}
void namaste(){
    printf("Namaste...!!");
}
void bonjour(){
    printf("Bonjour...!!");
}