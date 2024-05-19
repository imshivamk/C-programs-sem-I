#include <stdio.h>
struct student
{
    int rollno;
    char name[50];
    float cgpa;
};

int main()
{
    struct student s1 = {10, "arnav choudhary", 9.8};
    struct student s2 = {20, "rajat dalal", 8.8};
    struct student s3 = {30, "raman kumar", 8.2};
    struct student studentlist[3] = {s1, s2, s3};

    for (int i = 0; i < 3; i++)
    {
        printf("roll numbers: %d\n", studentlist[i].rollno);
        printf("Name: %s\n", studentlist[i].name);
        printf("CGPA: %f\n", studentlist[i].cgpa);
    }

    return 0;
}