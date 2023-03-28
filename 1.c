#include<stdio.h>
int sumN(int);
int main()
{
    int num, res;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    res = sumN(num);
    printf("\nThe sum of first %d natural numbers is: %d", num, res);
    
    printf("\n\n");
    return 0;
}

int sumN(int n)
{
    int sum;
    if (n == 1)
        return 1;

    sum = n + sumN(n - 1);
    return sum;
}