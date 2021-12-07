#include <stdio.h>

void EvenOrOdd(int n);

int main()
{
	int n, i;
	printf("Enter the number : ");
	
	scanf("%d", &n);
	
	EvenOrOdd(n);
	
	return 0;
}

void EvenOrOdd(int n)
{
	if(n % 2 == 0){
		printf("The given number is even");
	} else {
		printf("The given number is odd");
	}
}
