#include<stdio.h>
void main()
{
	int num,i,andmusk,zeros=0,ones=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=0;i<16;i++)
	{
		andmusk=1<<i;
		if(num & andmusk)
			ones++;
		else
			zeros++;
	}
	printf("number of zeros are %d and number of ones are %d",zeros,ones);
}