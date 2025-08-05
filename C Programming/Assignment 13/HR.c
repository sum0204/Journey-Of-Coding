// 4. HR (id, name, salary, commission)

struct hr
{
	int id;
	char name[20];
	int salary;
	float commission;
};

void main()
{
	struct hr h1,h2;
	printf("Enter the Id , Name , salary and Commission of HR 1 :");
	scanf("%d",&h1.id);
	scanf("%s",&h1.name);
	scanf("%d",&h1.salary);
	scanf("%f",&h1.commission);
	
	
	printf("Enter the Id , Name , salary and Commission of HR 2 :");
	scanf("%d",&h2.id);
	scanf("%s",&h2.name);
	scanf("%d",&h2.salary);
	scanf("%f",&h2.commission);
	
	printf("%d ",h1.id);
	printf("%s ",h1.name);
	printf("%d ",h1.salary);
	printf("%.2f",h1.commission);
	
	
	printf("\n%d ",h2.id);
	printf("%s ",h2.name);
	printf("%d ",h2.salary);
	printf("%.2f",h2.commission);
	
}
