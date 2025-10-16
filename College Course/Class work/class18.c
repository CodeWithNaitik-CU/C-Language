//STUDENT PROFILE 
#include<stdio.h>
int main()
{
    char name[100];
    printf("Enter the name : ");
    scanf("%s",&name);
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);
    char course[100];
    printf("Enter the course : ");
    scanf("%s",&course);
    char college[100];
    printf("Enter the name of the college : ");
    scanf("%s",&college);

    printf("-------------------------------\n");
    printf("STUDENT PROFILE\n");
    printf("-------------------------------\n");
    printf("\n");
    printf("Name       >  %s\n",name);
    printf("Age        >  %d\n",age);
    printf("Course     >  %s\n",course);
    printf("College    >  %s\n",college);



    return 0;
}