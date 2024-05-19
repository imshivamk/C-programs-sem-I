#include <stdio.h>
int main()
{

    int array[100], n;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("The largest number:%d\n", array[n-1]);
    printf("The second largest number:%d\n", array[n-2]);

    return 0;
}