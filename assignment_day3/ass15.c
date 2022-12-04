#include<stdio.h>
void main()
{
	unsigned int num;
	int i,andmusk;
	printf("Enter a number: ");
	scanf("%u",&num);
	for(i=15;i>=0;i--)
	{
		andmusk=1<<i;
		if(num & andmusk)
			printf("1");
		else
			printf("0");
	}
}