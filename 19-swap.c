#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);

    printf("a : %d \n b : %d\n", a, b);

    swap(&a, &b);
    
    printf("a : %d \n b : %d\n", a, b);

    return 0;
}