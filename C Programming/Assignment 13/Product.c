//10. Product (id, name, quantity, price)

struct Product
{
	int id;
	char name[20];
	int quantity;
	double price;
};

void main()
{
	struct Product p1,p2;
	printf("Enter the Id , Name , Quantity and Price of Product 1 :");
	scanf("%d",&p1.id);
	scanf("%s",&p1.name);
	scanf("%d",&p1.quantity);
	scanf("%lf",&p1.price);
	
	
	printf("Enter the Id , Name , Quantity and Price of Product 2 :");
	scanf("%d",&p2.id);
	scanf("%s",&p2.name);
	scanf("%d",&p2.quantity);
	scanf("%lf",&p2.price);
	
	printf("%d ",p1.id);
	printf("%s ",p1.name);
	printf("%d ",p1.quantity);
	printf("%.2lf ",p1.price);	
	
	printf("\n%d ",p2.id);
	printf("%s ",p2.name);
	printf("%d ",p2.quantity);
	printf("%.2lf ",p2.price);
}
