#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter the number:\n");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count==0 || num==2)
    {
        printf("The number is prime!\n");
    }
    else
    {
        printf("The number is not prime!\n");   
    }
    

    return 0;
}