#include <stdio.h>
#include <string.h>

int main()
{
	char s[20];
	int l,i;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		putchar(s[i]);
		putchar('\n');
	}
	return 0;
}
