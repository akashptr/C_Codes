#include<stdio.h>
void main()			/* Fibonacci series upto n */
{
	int ul,a=0,b=1,sum=0;
	printf("Enter the upper limit: ");
	scanf("%d",&ul);
	while(sum<=ul)
	{
		printf("%d ",sum);
		a=b;
		b=sum;
		sum=a+b;
	}
	printf("\n");
}