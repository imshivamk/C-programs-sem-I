#include <stdio.h>
int main()
{

    int a[100], n, sk;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to serch:\n");
    scanf("%d", &sk);

    for (int i = 0; i < n; i++)
    {
        if (sk == a[i])
        {
            printf("Element found at position %d\n", i + 1);
        }
    }

    return 0;
}