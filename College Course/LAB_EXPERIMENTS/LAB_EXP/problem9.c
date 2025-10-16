// PERFORM MATRIX OPERATIONS(ADD,SUBTRACT,MULTIPLY AND TRANSPOSE) FOR TWO 3X3 MATRICES
#include<stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3];
    int i, j, k, choice;

    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    printf("\n------ MENU ------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose (of first matrix)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            for(i = 0; i < 3; i++) {
                for(j = 0; j < 3; j++) {
                    c[i][j] = a[i][j] + b[i][j];
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            for(i = 0; i < 3; i++) {
                for(j = 0; j < 3; j++) {
                    c[i][j] = a[i][j] - b[i][j];
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            for(i = 0; i < 3; i++) {
                for(j = 0; j < 3; j++) {
                    c[i][j] = 0;
                    for(k = 0; k < 3; k++)
                        c[i][j] += a[i][k] * b[k][j];
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;

        case 4:
            for(i = 0; i < 3; i++) {
                for(j = 0; j < 3; j++)
                    printf("%d ", a[j][i]);
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
