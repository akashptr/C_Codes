#include<stdio.h>
long int fact(int);
void main()
{
	int n,r;
	double ncr;
	printf("Enter the value of n and r to calculate nCr: ");
	scanf("%d %d",&n,&r);
	if((n<r)||(n<0)||(r<0))
		printf("Invalid input\n");
	else
	{
		ncr=fact(n)/(fact(r)*fact(n-r));
		printf("The result of the combination is: %.2lf\n",ncr);
	}
}
long int fact(int num)
{
	long int result=1;
	for(int i=1;i<=num;i++)
		result=result*i;
	return(result);
}