#include<stdio.h>
int is_prime(int);
void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("The prime factors of %d is:\n",num);
	for(int i=2;i<=num;i++)
		if((num%i)==0)
			if(is_prime(i))
				printf("%d ",i);
}
int is_prime(int num)
{
	if(num==1)
		return(0);
	for(int i=2;i<=(num/2);i++)
		if((num%i)==0)
			return(0);
	return(1);
}