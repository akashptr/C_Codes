#include <stdio.h>
#include <string.h>

int main()
{
	char s[20];
	int i,l;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=s[l-i-1])
		{
			printf("\nNot palindrome!");
			return 0;
		}
	}
	printf("\nPalindrome!");
	return 0;
}
