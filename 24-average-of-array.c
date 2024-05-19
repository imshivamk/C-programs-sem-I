#include <stdio.h>
int main()
{
    int array[10], average, sum =0;

    printf("Enter array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum = sum + array[i];
    }

    average = sum/10;
    printf("the average is %d", average);

    return 0;
}