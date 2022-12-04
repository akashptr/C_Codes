#include <stdio.h>
#include <string.h>

int main()
{
	char s[20];
	int i,l,count=0;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l-1;i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
			count++;
	}
	printf("\nThe string has %d number of words!",count+1);
	return 0;
}
