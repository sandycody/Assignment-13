#include<stdio.h>
int hcf(int, int);
int main()
{
    int a, b, res;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);

    res = hcf(a, b);
    printf("\nThe HCF of %d and %d is: %d", a, b, res);

    printf("\n\n");
    return 0;
}

int hcf(int num1, int num2)
{
    int h;
    if (num1 > num2)
    {
        if (num1 % num2 == 0)
            return num2;

        h = hcf(num1 % num2, num2);
        return h;
    }

    else
    {
        if (num2 % num1 == 0)
            return num1;

        h = hcf(num1, num2 % num1);
        return h;   
    }
}