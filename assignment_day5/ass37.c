#include<stdio.h>
#include<math.h>
long int fact(int);
void main()
{
	int num,terms,n=1;
	double sum=0;
	printf("Enter the number(x) and the number of terms: ");
	scanf("%d %d",&num,&terms);
	for(int i=0;i<terms;i++)
	{
		sum=sum+((pow(-1,i)*pow(num,n))/fact(n));
		n+=2;
	}
	printf("The result is %.2lf\n",sum);
}
long int fact(int num)
{
	long int result=1;
	for(int i=1;i<=num;i++)
		result=result*i;
	return(result);
}