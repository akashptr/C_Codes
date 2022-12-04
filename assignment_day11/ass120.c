#include<stdio.h>
struct angle
{
	int deg,min;
};
typedef struct angle angle;
angle sumangle(angle,angle);
void display(angle);
void main()
{
	angle a1,a2,sum;
	printf("Enter first angle(Degree, minute): ");
	scanf("%d%d",&a1.deg,&a1.min);
	printf("Enter second angle(Degree, minute): ");
	scanf("%d%d",&a2.deg,&a2.min);
	sum=sumangle(a1,a2);
	display(sum);
}

angle sumangle(angle x,angle y)
{
	angle result;
	result.deg=x.deg+y.deg;
	result.min=x.min+y.min;
	result.deg=result.deg+(result.min/60);
	result.min=result.min%60;
	result.deg=result.deg%360;
	return(result);
}

void display(angle ang)
{
	printf("Degree = %d, Minute = %d",ang.deg,ang.min);
}