#include<stdio.h>
int main()
{
    int t1 = 0, t2 = 1, t3, n;

    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    printf("The fibonancci series upto %d terms is:", n);
    printf("%d %d ", t1, t2);
    for (int i = 1; i <= n; i++)
    {
        t3 = t1 + t2;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
    }
    


return 0;
}