//sum of Prime Numbers

#include <stdio.h>

int main()
{
    int n, prime ,sum = 0;
    printf("Enter the number = ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        prime = 1;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime == 1)
        {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\n");
    printf("\nSum of first %d prime numbers = %d", n, sum);
    return 0;
}



