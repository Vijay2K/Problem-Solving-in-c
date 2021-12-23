//Write a C program to search all occurrences of a character in given string.

#include <stdio.h>
#include <string.h>
#define size 100

int main()
{
	char str[size];
	char c;
	printf("Enter the string : ");
	gets(str);
	printf("Enter the character to search : ");
	c = getchar();
	
	int i;
	printf("%c is found at the index : ", c);
	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] == c)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}
