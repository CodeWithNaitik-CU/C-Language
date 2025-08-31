#include<stdio.h>
int main(){
    int a;
    printf("enter the value : ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("you entered case 1\n");
            break;
        case 2:
            printf("you entered case 2\n");
            break;
        case 3:
            printf("you entered case 3\n");
            break;
        case 4:
            printf("you entered case 4\n");
            break;
        default :
            printf("This is default ");
    }
    return 0;
}