//Sum of the given digits using recursion and non-recursion

#include <stdio.h>

int NonRecursive(int n);
int Recursive(int n);

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	int result1 = NonRecursive(n);
	int result2 = Recursive(n);
	
	printf("sum of the digits using non-recursive: %d\n", result1);
	printf("Sum of the digits using recursive : %d\n", result2);	
	return 0;	
}

int NonRecursive(int n)
{
	int rem, count = 0;
	while(n > 0)
	{
		rem = n % 10;
		count += rem;
		n /= 10;
	}
	
	return count;
}

int Recursive(int n)
{
	if(n == 0)
		return 0;
	else
		return n % 10 + Recursive(n / 10);
	
}
