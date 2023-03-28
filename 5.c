#include<stdio.h>
int digiSum(int);
int main()
{
    int num, res;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    res = digiSum(num);
    printf("\nThe sum of digits in %d is: %d", num, res);

    printf("\n\n");
    return 0;
}

int digiSum(int n)
{
    int sum = 0;
    if (n > 0)
    {
        sum = digiSum(n / 10) + (n % 10);
        return sum;
    }
}