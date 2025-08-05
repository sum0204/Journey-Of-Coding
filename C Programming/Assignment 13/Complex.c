//9. Complex (real, imaginary)
#include<stdio.h>
struct Complex
{
	float real;
	float img;
};

void main()
{
	struct Complex c;
	
	printf("Enter the Real : ");
	scanf("%f",&c.real);
	
	printf("Enter the Imaginary : ");
	scanf("%f",&c.img);
	
	printf("The Complex Number is : %.2f + %.2fi",c.real,c.img);
}