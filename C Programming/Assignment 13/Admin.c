// 3. Admin (id, name, allowance)

struct admin
{
	int id;
	char name[20];
	int allowance;
};

void main()
{
	struct admin a1,a2;
	printf("Enter the Id , Name and allowance of Admin 1 :");
	scanf("%d",&a1.id);
	scanf("%s",&a1.name);
	scanf("%d",&a1.allowance);
	
	printf("Enter the Id , Name and allowance of Admin 2 :");
	scanf("%d",&a2.id);
	scanf("%s",&a2.name);
	scanf("%d",&a2.allowance);
	
	printf("%d ",a1.id);
	printf("%s ",a1.name);
	printf("%d ",a1.allowance);
	
	
	printf("\n%d ",a2.id);
	printf("%s ",a2.name);
	printf("%d ",a2.allowance);
	
}
