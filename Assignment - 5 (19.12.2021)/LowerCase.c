//Write a C program to convert lowercase string to uppercase.

#include <stdio.h>
#include <string.h>
#define size 100

int main()
{
	char str[size];
	printf("Enter the upper case string : ");
	gets(str);

	printf("Lower case string : %s", strlwr(str));
	return 0;
}

