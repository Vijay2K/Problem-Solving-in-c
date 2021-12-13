#include <stdio.h>

int main()
{
	int n, enteredVal, rev = 0;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	enteredVal = n;
	
	while(n > 0)
	{
		int rem = n % 10;
		rev = (rev * 10) + rem;
		n /= 10;
	}
	
	printf("\nThe reverse value : %d\n", rev);
	
	if(rev == enteredVal)
	{
		printf("\nThe value is a palindrome");
	} else {
		printf("\nThe value is not a palindrome");
	}
	
	return 0;
}
