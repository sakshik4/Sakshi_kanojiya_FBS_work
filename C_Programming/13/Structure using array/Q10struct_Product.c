typedef struct product
{
	int id;
	char name[20];
	int quantity;
	int price;
}product;
#include<stdio.h>
void main()
{
	product productarr[5];
	for(int i=0;i<5;i++)
	{
	printf("Enter the %d Product details (Id,Name,Quantity,Price)",i+1);
	scanf("%d %s %d %d",&productarr[i].id,productarr[i].name,&productarr[i].quantity,&productarr[i].price);
	}
	for(int i=0;i<5;i++)
	{
	printf("Product details of %d",i+1);
	printf("\nId=%d",productarr[i].id);
    printf("\nName=%s",productarr[i].name);
    printf("\nQuantity=%d",productarr[i].quantity);
    printf("\nPrice=%d\n",productarr[i].price);

}
    
}