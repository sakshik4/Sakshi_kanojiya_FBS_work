struct Complex{
	int real;
	int imaginary;
};
#include<stdio.h>
void main() {
	struct Complex c1,c2;
	c1.real=10;
	c1.imaginary=20;
	printf("\nComplex number:%d+%di\n",c1.real,c1.imaginary);
	printf("Enter inch and feet ");
	scanf("%d",&c2.real);
	scanf("%d",&c2.imaginary);
	printf("\nComplex number:%d + %di",c2.real,c2.imaginary);
}