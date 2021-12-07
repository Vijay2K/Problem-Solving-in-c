//Reverse the given number using the given number

#include <stdio.h>

int Reverse(int n);
int rev = 0;

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d", &num);
	
	int result = Reverse(num);
	printf("The reverse number is %d\n", result);
	printf("Non recursion method : %d", NonRecursion(num));
	return 0;
}

int Reverse(int n)
{	
	if(n > 0)
	{
		int rem = n % 10;
		rev = (rev * 10) + rem;
		Reverse(n / 10);		
	}
	
	return rev;
}

int NonRecursion(int n)
{
	int r = 0;
	while(n > 0)
	{
		int rem = n % 10;
		r = (r * 10) + rem;
		n = n / 10;
	}
	
	return r;
}

