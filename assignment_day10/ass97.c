#include <stdio.h>
#include <string.h>

int main()
{
	char s[20],ch;
	int l,i,sum=0;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		ch=s[i];
		sum+=(int)ch;
	}
	printf("Sum of the ASCII of all characters in string=%d",sum);
	return 0;
}
