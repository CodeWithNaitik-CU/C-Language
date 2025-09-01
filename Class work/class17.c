#include<stdio.h>
int main()
{
    char a;
    printf("Enter the value from a-g : ");
    scanf("%c",&a);
    switch(a)
    {
        case 'a': printf("Monday");
            break;
        case 'b': printf("tuesday");
            break;
        case 'c': printf("Wednesday");
            break;
        case 'd': printf("Thursday");
            break;
        case 'e': printf("Friday");
            break;
        case 'f': printf("Saturday");
            break;
        case 'g': printf("Sunday");
            break;
        default:
            printf("Wrong alphabet");
    }
    return 0;
}
