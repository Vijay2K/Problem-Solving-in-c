//Write a C program to check whether a string is palindrome or not

#include <stdio.h>
#include <string.h>
#define size 100

int main()
{
	char str[size];
	int isPalindrome;
	printf("Enter the string : ");
	
	gets(str);
	char revStr[size];
	strcpy(revStr, str);
	
	printf("reverse string : %s\n", strrev(revStr));
	isPalindrome = strcmp(str, revStr);
	
	if(isPalindrome == 0)
	{
		printf("The %s is a palindrome.", str);
	} else {
		printf("The %s is not a palindrome.", str);
	}
	return 0;
}
