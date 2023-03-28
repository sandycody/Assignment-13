#include<stdio.h>
int sumSqN(int);
int main()
{
    int num, res;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    res = sumSqN(num);
    printf("\nThe sum of squares of first %d natural numbers is: %d", num, res);

    printf("\n\n");
    return 0;
}

int sumSqN(int n)
{
    int sum;
    if (n > 0)
    {
        sum = n*n + sumSqN(n-1);
        return sum;
    }
}