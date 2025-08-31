#include<stdio.h>
int main()
{
    
    int i = 5;
    printf("value of i is %d\n",i);
    printf("value of i is %d\n",--i);
    printf("value of i is %d\n",i--);
    printf("value of i is %d\n",i);

    // i++ - first prints i then decreament 
    // ++i - first decreament then prints i 
    // i-=2 is same as i = i - 2
    return 0;
}
