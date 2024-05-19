#include <stdio.h>
struct employee
{
    int empID;
    char name[50];
    char dept[50];
    int salary;
};

int main()
{
    struct employee emp1 = {001, "arnav choudhary", "marketing", 85000};
    struct employee emp2 = {001, "rajat dalal", "HR", 25000};
    struct employee emp3 = {003, "raman kumar", "Finance", 35000};
    struct employee employeeData[3] = {emp1, emp2, emp3};

    for (int i = 0; i < 3; i++)
    {
        printf("employee ID: %d\n", employeeData[i].empID);
        printf("Employee Name: %s\n", employeeData[i].name);
        printf("department: %s\n", employeeData[i].dept);
        printf("salary: %d\n", employeeData[i].salary);

    }

    return 0;
}