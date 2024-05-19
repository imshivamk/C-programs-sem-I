#include <stdio.h>
int main()
{
    int num, factorial = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    printf("The factorial is %d", factorial);
    

    return 0;
}