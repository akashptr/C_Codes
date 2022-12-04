#include <stdio.h>
#include <string.h>

int main()
{
	char s[30],s1[10];
	int i,l1,l2,j,flag,count=0;
	printf("Enter a string: ");
	gets(s);
	printf("Input a pattern: ");
	gets(s1);
	l1=strlen(s);
	l2=strlen(s1);
	for(i=0;i<=l1-l2;i++)
	{
		flag=0;
		for(j=0;j<l2;j++)
		{
			if(s1[j]!=s[i+j])
				flag=1;
		}
		if(flag==0)
			count++;
	}
	printf("The pattern exists in the string %d times",count);
	return 0;
}
