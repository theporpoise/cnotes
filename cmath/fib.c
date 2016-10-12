#include <stdio.h>

void main()
{
    int fib1 = 0, fib2 = 1, fib3, limit, limit2, count = 0;
 
    printf("enter first variable\n");
    scanf("%d", &limit);
    printf("enter second variable\n");
    scanf("%d", &limit2);
    printf("output 1 \n");
    printf("%d\n", limit);
    printf("%d\n", limit2);

    printf("first two of fib are %d and %d \n", fib1, fib2);

    count = 2;
    while (count < limit)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }
}

