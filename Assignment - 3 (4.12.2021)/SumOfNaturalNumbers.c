//Find the sum of first 25 natural numbers using recursion

#include <stdio.h>

int SumOfNatural(int);

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	int result = SumOfNatural(n);
	printf("Sum of first %d natural number is %d\n", n, result);
	printf("without recursion : %d", NonRecursion(n));
	return 0;
}

int SumOfNatural(int n)
{
	if(n == 0)
		return 0;
	else
		return n + SumOfNatural(n - 1);
}


int NonRecursion(int n)
{
	int sum = 0,i;
	for(i = 0; i <= n; i++)
	{
		sum += i;
	}
	
	return sum;
}
