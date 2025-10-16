#include<stdio.h>
int main()
{
    int i = 0;
    while (i <= 20) {
        if (i >= 10) {
            printf("The value of i is %d\n", i);
        }
        i = i + 1;  // moved outside of if
    }
    return 0;
}
