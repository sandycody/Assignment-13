#include<stdio.h>
int fib(int);
int main()
{
    int num ,res;
    printf("\nEnter how many terms you have to print: ");
    scanf("%d", &num);

    printf("\nThe first %d terms of fibonacci series are: \n\n", num);
    for (res = 1; res <= num; res++)
        printf("%d \t", fib(res));

    printf("\n\n");
    return 0;
}

int fib(int n)
{
    int next;
    if (n == 1)
        return 0;

    else if(n == 2)
        return 1;
    
    next = fib(n - 1) + fib(n - 2);
    return next;
}