#include<stdio.h>
long int fact(int);
void main()
{
	int number,n,digit;
	long int sum=0;
	printf("Enter a number: ");
	scanf("%d",&number);
	n=number;
	while(n>0)
	{
		digit=n%10;
		sum=sum+fact(digit);
		n=n/10;
	}
	printf("The sum of the factorial of the digits is %ld\n",sum);
	if(sum==number)
		printf("It is a Krishnamurty number\n");
	else
		printf("It is not a Krishnamurty number\n");
}
long int fact(int num)
{
	long int result=1;
	for(int i=1;i<=num;i++)
		result=result*i;
	return(result);
}