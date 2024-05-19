#include <stdio.h>
#include <math.h>

int main()
{
    int a, ch;
    printf("1.squre\n2.cube\n3.square root\n");
    scanf("%d",&ch);
    printf("Enter the number:\n");
    scanf("%d", &a);

    switch (ch)
    {
    case 1:
        printf("square : %d", a*a);
        break;
    case 2:
        printf("cube is %d", a*a*a);
        break;
    case 3:
        printf("squareroot is %d", sqrt(a));
        break;
    default:
        printf("invalid input\n");
        break;
    }

    return 0;
}