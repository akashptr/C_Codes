#include<stdio.h>
#include<conio.h>
#include<math.h>
struct pt
{
	int x,y;
};
typedef struct pt point;
point midpoint(point,point);
int distance(point,point);
void display(point);
void main()
{
	point p1,p2,mid;
	int dist;
	printf("Enter the first point(coordinate x, y): ");
	scanf("%d%d",&p1.x,&p1.y);
	printf("Enter the second point(coordinate x, y): ");
	scanf("%d%d",&p2.x,&p2.y);
	mid=midpoint(p1,p2);
	dist=distance(p1,p2);
	printf("Coordinate of the mid point is:\n");
	display(mid);
	printf("\nDistance between the points is: %d",dist);
}
point midpoint(point c1,point c2)
{
	point midpt;
	midpt.x=(c1.x+c2.x)/2;
	midpt.y=(c1.y+c2.y)/2;
	return(midpt);
}
int distance(point pt1,point pt2)
{
	int dist;
	dist=sqrt(pow((pt1.x - pt2.x),2) + pow((pt1.y - pt2.y),2));
	return(dist);
}
void display(point pt)
{
	printf("x-coordinate: %d, y-coordinate: %d",pt.x,pt.y);
}