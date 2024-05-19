#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, num2, rem, sum = 0;
    printf("Enter the number:\n");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        sum = sum*10 + rem;
        num = num / 10;
    }

    printf("The reverse of the number is:\n%d", sum);

    return 0;
}