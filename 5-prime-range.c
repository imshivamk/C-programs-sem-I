#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the range:\n");
    printf("STARTS from:\n");
    scanf("%d", &a);
    printf("ENDS at:\n");
    scanf("%d", &b);

    printf("The prme numbers between the given range:\n");

    for (int i = a; i <= b; i++)
    {
        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 0 && i!=1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}