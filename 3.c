#include<stdio.h>
int sumEven(int);
int main()
{
    int num, res;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    res = sumEven(num);
    printf("\nThe sum of first %d even natural numbers is: %d", num, res);
    
    printf("\n\n");
    return 0;
}

int sumEven(int n)
{
    int sum;
    if (n == 1)
        return 2;

    sum = 2*n + sumEven(n - 1);
    return sum;
}