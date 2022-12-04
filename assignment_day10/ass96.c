#include <stdio.h>
#include <string.h>

int main()
{
	char s[50];
	int l,i,d,sum=0;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			d=(int)s[i];
			d=d-48;
			sum+=d;
		}
	}
	printf("The sum of the digits present in the string= %d",sum);
	return 0;
}
