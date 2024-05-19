#include <stdio.h>
int simpleInterest(int p, int r, int n)
{
    int interest = p*r*n/100;
    return interest;

}
int main()
{
    int p,r,n;
    printf("Enter the pricipal amount:\n");
    scanf("%d", &p);
    printf("Enter the rate of interest:\n");
    scanf("%d", &r);
    printf("Enter the time period:\n");
    scanf("%d", &n);

    printf("The simple interest : %d\n", simpleInterest(p,r,n));

    return 0;
}