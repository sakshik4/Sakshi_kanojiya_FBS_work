
typedef struct Complex
{
	int real;
	int imaginary;
}Complex;
#include<stdio.h>
void main()
{
	Complex Complexarr[5];
	for(int i=0;i<5;i++)
	{
	printf("Enter the %d Complex number details(real number,imaginary number)",i+1);
	scanf("%d %d",&Complexarr[i].real,&Complexarr[i]. imaginary);
	}
	for(int i=0;i<5;i++)
	{
	printf("Complex number details of %d",i+1);
	printf("\n%d+%di\n",Complexarr[i].imaginary,Complexarr[i].imaginary);

}
    
}