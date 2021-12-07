//Number of digits in a number

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter the number = ");
    scanf("%d", &n);

    do
    {
        n /= 10;
        count++;
    } while(n > 0);

    printf("No. of digits = %d", count);

    return 0;
}

