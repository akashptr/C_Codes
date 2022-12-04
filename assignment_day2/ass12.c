#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,dis;
	float root1,root2;
	printf("Enter the coefficients a,b and c in a quadratic equation ax^2+bx+c=0\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("The Quadratic equation is (%d)x^2+(%d)x+(%d)=0\n",a,b,c);
	dis=(b*b)-(4*a*c);
	if(dis>=0)
	{
		root1=((-b)+sqrt(dis))/(2*a);
		root2=((-b)-sqrt(dis))/(2*a);
		printf("The roots are %0.2f and %0.2f",root1,root2);
	}
	else
	{
		printf("The equation has complex roots");
	}
}