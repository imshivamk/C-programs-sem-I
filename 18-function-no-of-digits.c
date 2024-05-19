#include <stdio.h>

int main()
{
    int num, count = 0 , rem;
    printf("Enter the number:\n");
    scanf("%d", &num);

    while (num!=0)
    {
        count++;
        num = num/10;
    }

    printf("The number of digits:%d\n", count);
    
    
    return 0;
}