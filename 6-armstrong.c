#include<stdio.h>

int main()
{
    int num, num2, sum = 0, rem;
    printf("Enter a three digit number:\n");
    scanf("%d", &num);
    num2 = num;

    while (num!=0)
    {
        rem = num%10;
        sum = sum + rem*rem*rem;
        num = num/10;   
    }
    
    

    if (sum==num2)
    {
        printf("%d is an armstrong number!\n", num2);
    }
    else
    {
        printf("%d is not an armstrong number!\n", num2);
    }
    





return 0;
}