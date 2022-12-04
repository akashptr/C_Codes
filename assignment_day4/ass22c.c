#include<stdio.h>
void main()			/* Fibonacci series of n terms */
{
	int terms,a=0,b=1,sum=0;
	printf("Enter the number of terms: ");
	scanf("%d",&terms);
	for(int i=1;i<=terms;i++)
	{
		printf("%d ",sum);
		a=b;
		b=sum;
		sum=a+b;
	}
	printf("\n");
}