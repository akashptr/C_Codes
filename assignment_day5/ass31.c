#include<stdio.h>
int is_prime(int);
void main()
{
	int not,count=1,n=2,sum=0;
	printf("Enter the number of prime terms to be added: ");
	scanf("%d",&not);
	while(count<=not)
	{
		if(is_prime(n))
		{
			sum=sum+n;
			count++;
		}
		n++;
	}
	printf("The sum is %d\n",sum);
}

int is_prime(int num)
{
	for(int i=2;i<=(num/2);i++)
		if((num%i)==0)
			return(0);
	return(1);
}