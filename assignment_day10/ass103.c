#include <stdio.h>
#include <string.h>

int main()
{
	char s[50];
	int i,l,count=0;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	if(s[0]=='s' || s[0]=='S')
		count++;
	for(i=0;i<l-1;i++)
	{
		if(s[i]==' ' && (s[i+1]=='s' || s[i-1]=='S'))
			count++;
	}
	printf("\nThe number of words starting with S=%d",count);
	return 0;
}
