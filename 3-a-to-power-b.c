#include <stdio.h>
int main()
{
    int a, b;
    int power = 1;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }

    printf("a to the power b is %d", power);
    

    return 0;
}