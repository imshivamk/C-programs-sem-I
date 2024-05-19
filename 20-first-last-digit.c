#include<stdio.h>
int main()
{
    int num;
    printf("Enter a five digit number:\n");
    scanf("%d", &num);

    printf("The first digit:%d\n", num/10000);
    printf("The last digit:%d\n", num%10);

return 0;
}