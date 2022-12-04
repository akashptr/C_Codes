#include<stdio.h>
int is_prime(int);
void main()
{
	int end;
	printf("Enter the limit: ");
	scanf("%d",&end);
	for(int i=1;i<end;i++)
		if(is_prime(i)&&is_prime(i+2))
		{
			printf("{%d  %d}\n",i,i+2);
			i+=2;
		}
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