#include<stdio.h>
long int fact(int);
void main()
{
	int row;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<(row-i-1);j++)
			printf("  ");
		for(int k=0;k<=i;k++)
			printf("%2ld  ",fact(i)/(fact(k)*fact(i-k)));
		printf("\n");
	}
}
long int fact(int num)
{
	long int result=1;
	for(int i=1;i<=num;i++)
		result=result*i;
	return(result);
}