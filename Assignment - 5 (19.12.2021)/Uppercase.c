//Write a C program to convert lowercase string to uppercase.

#include <stdio.h>
#include <string.h>
#define size 100

int main()
{
	char str[size];
	printf("Enter the string : ");
	gets(str);
	
	printf("string in uppercase : %s", strupr(str));
		
	return 0;
}
