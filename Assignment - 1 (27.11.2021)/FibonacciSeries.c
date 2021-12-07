//Fibonacci series

#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, n;

    printf("Enter the number = ");
    scanf("%d", &n);

    printf("%d ", b);
    for(int i = 0; i <= n; i++)
    {
        c = a + b;

        a = b;
        b = c;

        if(c > n)
            break;

        printf("%d ", c);
    }

    return 0;
}

