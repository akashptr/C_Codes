#include<stdio.h>
void main()
{
	float height,width,perimeter,area;
	printf("Enter the height & width of the rectangle: ");
	scanf("%f %f",&height,&width);
	perimeter=2*(height+width);
	area=height*width;
	printf("Perimeter = %.2f unit\nArea = %.2f square unit\n",perimeter,area);
}