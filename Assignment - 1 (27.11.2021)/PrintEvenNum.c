//Print even numbers

#include <stdio.h>

int main()
{
    int n = 1;

    printf("The even numbers are : \n");
    while(n <= 100)
    {
        if(n % 2 == 0)
        {
            printf("%d\n", n);
        }
        n++;
    }

    return 0;
}

