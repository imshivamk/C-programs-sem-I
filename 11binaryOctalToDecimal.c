#include <stdio.h>
#include <stdlib.h>

int power(int num, int index)
{
    int power = 1;
    for (int i = 1; i <= index; i++)
    {
        power = power * num;
    }
    return power;
}

int binToDec()
{

    int num = 0;
    printf("Enter binary number:\n");
    scanf("%d", &num);

    int decimal = 0;
    int i = 0;
    while (num != 0)
    {
        int rem = num % 10;
        if (rem == 1)
        {
            decimal += power(2, i);
            
        }
        i++;
        num /= 10;
    }
    printf("Decimal value : %d\n", decimal);
}

int OctalToDec()
{

    int num = 0;
    printf("Enter octal number:\n");
    scanf("%d", &num);

    int decimal = 0;
    int i = 0;
    while (num != 0)
    {
        int rem = num % 10;
        switch (rem)
        {
        case 1:
            decimal += rem * power(8, i);
            break;
        case 2:
            decimal += rem * power(8, i);
            break;
        case 3:
            decimal += rem * power(8, i);
            break;
        case 4:
            decimal += rem * power(8, i);
            break;
        case 5:
            decimal += rem * power(8, i);
            break;
        case 6:
            decimal += rem * power(8, i);
            break;
        case 7:
            decimal += rem * power(8, i);
            break;
        case 8:
            decimal += rem * power(8, i);
            break;

        default:
            break;
        }
        i++;
        num /= 10;
    }
    printf("Decimal value : %d\n", decimal);
}

int main()
{
    binToDec();
    OctalToDec();

    return 0;
}
