struct Product {
	int id;
	char name[20];
	int quantity;
	int price;
};
#include<stdio.h>
void main() {
	struct Product p1,p2;
	p1.id=101;
	strcpy(p1.name,"vivo");
	p1.quantity=1;
	p1.price=30000;
	printf("Product 1 details\nId=%d\nName=%s\nquantity=%d\nprice=%d\n",p1.id,p1.name,p1.quantity,p1.price);
	printf("Enter Product 2 details");
	scanf("%d",&p2.id);
	scanf("%s",p2.name);
	scanf("%d",&p2.quantity);
	scanf("%d",&p2.price);
	printf("Product 2 details\nId=%d\nName=%s\nquantity=%d\nprice=%d\n",p2.id,p2.name,p2.quantity,p2.price);

}
