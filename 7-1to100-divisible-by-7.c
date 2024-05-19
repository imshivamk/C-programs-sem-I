#include<stdio.h>
int main()
{
    printf("The numbers from 1 to 100 divisible by 7 are:\n");
    for (int i = 1; i <= 100; i++)
    {
        if (i%7==0)
        {
            printf("%d ", i);
        }
        
    }
    
    
return 0;
}