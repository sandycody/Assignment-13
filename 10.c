#include<stdio.h>
int power(int, int);
int main()
{
    int base, exp, res;
    printf("\nEnter the base: ");
    scanf("%d", &base);
    printf("\nEnter the exponent: ");
    scanf("%d", &exp);

    res = power(base, exp);
    printf("\n%d raised to the power %d is: %d", base, exp, res);

    printf("\n\n");
    return 0;
}

int power(int x, int y)
{
    int p;
    if (y == 0)
        return 1;
        
    p = x * power(x, y-1);
    return p;
}