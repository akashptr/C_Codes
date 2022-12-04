#include<stdio.h>
#include<math.h>
void main()
{
	int num,temp,last,nod=0;
	long int sqr;
	printf("Enter a number: ");
	scanf("%d",&num);
	sqr=num*num;
	temp=num;
	while(temp!=0)
	{
		nod++;
		temp = temp/10;
	}
	last = sqr % (int)(pow(10,nod));
	if(last==num)
		printf("Automorphic number");
	else
		printf("Not Automorphic");
}