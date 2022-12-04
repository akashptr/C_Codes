#include<stdio.h>
int is_prime(int);
void goldbach(int);
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(((n%2)==0) && (n>2))
		goldbach(n);
	else
		printf("Invalid input");
}
int is_prime(int num)
{
	int flag=1;
	for(int i=2;i<=(num/2);i++)
		if((num % i) == 0)
			return(flag-1);
	return(flag);
}
void goldbach(int g)
{
	for(int i=2;i<=(g/2);i++)
		if(is_prime(i) && is_prime(g-i))
			printf("%d + %d = %d\n",i,(g-i),g);
}