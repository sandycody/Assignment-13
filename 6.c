#include<stdio.h>
int fact(int);
int main()
{
    int num, res;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    res = fact(num);
    printf("\nThe factorial of %d is: %d", num, res);

    printf("\n\n");
    return 0;
}

int fact(int n)
{
    int fac;
    if (n == 0 || n == 1)
        return 1;

    fac = n * fact(n - 1);
    return fac;
}