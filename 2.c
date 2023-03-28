#include<stdio.h>
int sumOdd(int);
int main()
{
    int num, res;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    res = sumOdd(num);
    printf("\nThe sum of first %d odd natural numbers is: %d", num, res);
    
    printf("\n\n");
    return 0;
}

int sumOdd(int n)
{
    int sum;
    if (n == 1)
        return 1;

    sum = (2*n - 1) + sumOdd(n - 1);
    return sum;
}