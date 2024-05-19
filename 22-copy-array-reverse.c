#include<stdio.h>
int main()
{
    int a[5], b[5];

    printf("Enter array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("first Array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nCopying the elements of first array into second in reverse order...\n");

    for (int i = 0; i < 5; i++)
    {
        b[5-i-1] = a[i];
    }
    printf("second Array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }


return 0;
}