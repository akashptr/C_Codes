#include<stdio.h>
void main()
{
	int row,n,i,j,k;
	printf("Enter the number of rows(odd): ");
	scanf("%d",&row);
	if((row%2)==0)
		printf("It is not an odd number");
	else
	{
		n=(row+1)/2;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=(i-1);j++)
				printf(" ");
			for(k=1;k<=((2*(n-i))+1);k++)
				printf("*");
			printf("\n");
		}
		for(i=1;i<=(n-1);i++)
		{
			for(j=1;j<=(n-i-1);j++)
				printf(" ");
			for(k=1;k<=((2*i)+1);k++)
				printf("*");
			printf("\n");
		}
	}
}