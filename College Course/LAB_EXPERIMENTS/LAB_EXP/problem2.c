// BUILD A RESULT CALCULATOR THAT TAKES MARKS OF 3 SUBJECTS AND PRINTS TOTAL,AVERAGE AND GRADE
#include<stdio.h>

int main() {
    int s1, s2, s3;
    int total;
    float avg;
    char grade;

    printf("Enter marks of subject 1: ");
    scanf("%d", &s1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &s2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &s3);

    total = s1 + s2 + s3;
    avg = total / 3.0;

    if (avg >= 90)
        grade = 'A';
    else if (avg >= 75)
        grade = 'B';
    else if (avg >= 60)
        grade = 'C';
    else if (avg >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n---------------------------\n");
    printf("        RESULT CARD\n");
    printf("---------------------------\n");
    printf("Subject 1 : %d\n", s1);
    printf("Subject 2 : %d\n", s2);
    printf("Subject 3 : %d\n", s3);
    printf("---------------------------\n");
    printf("Total Marks : %d\n", total);
    printf("Average     : %.2f\n", avg);
    printf("Grade       : %c\n", grade);
    printf("---------------------------\n");

    return 0;
}
