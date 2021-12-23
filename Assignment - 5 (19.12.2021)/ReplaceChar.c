//Write a C program to replace first occurrence of a character with another in a string.

#include <stdio.h>
#include <string.h>
#define size 100

int main()
{
	char str[size], c, replaceChar;
	printf("Enter the string : ");
	gets(str);
	
	printf("Enter the character : ");
	scanf("%c", &c);
	
	getchar();
		
	printf("Enter the replacing character : ");
	scanf("%c", &replaceChar);
	
	int i;
	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] == c)
		{
			str[i] = replaceChar;
			break;
		}
	}
	
	printf("\n");
	printf("%s -> After replacing new character", str);
	return 0;
}
