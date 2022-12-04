#include<stdio.h>
int is_prime(int);
void main()			/* Prime Fibonacci series upto n */
{
	int ul,a=0,b=1,sum=0;
	printf("Enter the upper limit: ");
	scanf("%d",&ul);
	while(sum<=ul)
	{
		if(is_prime(sum))
			printf("%d ",sum);
		a=b;
		b=sum;
		sum=a+b;
	}
	printf("\n");
}
int is_prime(int num)
{
	if((num==0)||(num==1))
		return(0);
	for(int i=2;i<=(num/2);i++)
		if((num%i)==0)
			return(0);
	return(1);
}