// NUMBER GUESSING GAME 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int a;
    int num;
    int attempts = 0;   
    srand(time(0));

    num = (rand() % 100) + 1;   

    do {
        printf("Enter your guess : ");
        scanf("%d", &a);
        attempts++;

        if (a < num) {
            printf("YOU ARE LOWER\n");
        }
        else if (a > num) {
            printf("YOU ARE HIGHER\n");
        }
        else {
            printf("🎉 You got a good guess!\n");
        }

    } while (a != num);

    printf("YOUR SCORE (attempts) IS %d\n", attempts);

    return 0;
}
