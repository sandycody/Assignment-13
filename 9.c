#include<stdio.h>
int digCount(int);
int main()
{
    int num, res;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    res = digCount(num);
    printf("\nThe total number of digits in %d is: %d", num, res);    

    printf("\n\n");
    return 0;
}

int digCount(int n)
{
    int count = 0;
    if (n > 0)
    {
        count = digCount(n / 10);
        count++;
    }
    return count;
}