#include<stdio.h>
#include<math.h>
struct complex
{
	float real,img;
};
typedef struct complex complex;
complex sum(complex,complex);
complex difference(complex,complex);
void displaymodulus(complex);
void main()
{
	complex a1,a2,summ,diff;
	printf("Enter first complex number(Real, Imaginary): ");
	scanf("%f%f",&a1.real,&a1.img);
	printf("Enter second complex number(Real, Imaginary): ");
	scanf("%f%f",&a2.real,&a2.img);
	summ=sum(a1,a2);
	diff=difference(a1,a2);
	printf("The result of the summation is: (%.2f) + i(%.2f)",summ.real,summ.img);
	printf("\nThe result of the subtraction is: (%.2f) + i(%.2f)",diff.real,diff.img);
	printf("\nThe modulus of the summation is: ");
	displaymodulus(summ);
	printf("\nThe modulus of the subtraction is: ");
	displaymodulus(diff);
}

complex sum(complex c1,complex c2)
{
	complex result;
	result.real=c1.real+c2.real;
	result.img=c1.img+c2.img;
	return(result);
}

complex difference(complex c1,complex c2)
{
	complex result;
	result.real=c1.real-c2.real;
	result.img=c1.img-c2.img;
	return(result);
}

void displaymodulus(complex c)
{
	float mod;
	mod=sqrt(pow(c.real,2)+pow(c.img,2));
	printf("The modulus is %.2f",mod);
}