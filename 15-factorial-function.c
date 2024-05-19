#include <stdio.h>

int factorial(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("The factorial is %d", factorial(num));
    

    return 0;
}