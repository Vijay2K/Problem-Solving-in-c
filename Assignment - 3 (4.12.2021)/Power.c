//Find the power of the number using recursion

#include <stdio.h>
#include <Math.h>

int Power(int b, int e);

int main()
{
	int base, exponent;
	printf("Enter the base number : ");
	scanf("%d", &base);
	printf("Enter the exponent : ");
	scanf("%d", &exponent);
	
	int result = Power(base, exponent);
	
	printf("Base %d to the power %d is %d\n", base, exponent, result);
	printf("Non Recusrion : %d", NonRecursion(base, exponent));	
	return 0;
}

int Power(int b, int e)
{
	if(e == 0)
		return 1;
	else
		return b * Power(b, e - 1);
}

int NonRecursion(int b, int e)
{
	int result = pow(b, e);
	return result;
}
