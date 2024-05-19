#include <stdio.h>

void MaxOfThree(int a, int b, int c)
{
    if (a>b && a>c)
    {
        printf("%d is the maximum of three", a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the maximum of three", b);
    }
    else
    {
        printf("%d is the maximum of three", c);
    }
    
}

int main()
{
    int a, b, c;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Enter c:\n");
    scanf("%d", &c);

    MaxOfThree(a,b,c);

    return 0;
}