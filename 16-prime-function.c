#include <stdio.h>

void primeOrNot(int num)
{
    int count = 0;

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
}

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    primeOrNot(num);

    
    

    return 0;
}