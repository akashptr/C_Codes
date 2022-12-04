#include <stdio.h>
#include <string.h>

int main()
{
	char s[30];
	int i,l;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	if(s[0]!=' ')
		printf("%c.",s[0]);
	for(i=0;i<l-1;i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
			printf("%c.",s[i+1]);
	}
	return 0;
}
