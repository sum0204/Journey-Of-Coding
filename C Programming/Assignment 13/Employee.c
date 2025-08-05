// 2. Employee (id, name, salary)

struct employee
{
	int id;
	char name[20];
	int salary;
};

void main()
{
	struct employee e1,e2;
	printf("Enter the Id , Name and Salary of Employee 1 :");
	scanf("%d",&e1.id);
	scanf("%s",&e1.name);
	scanf("%d",&e1.salary);
	
	printf("Enter the Id , Name and Salary of Employee 2 :");
	scanf("%d",&e2.id);
	scanf("%s",&e2.name);
	scanf("%d",&e2.salary);
	
	printf("%d ",e1.id);
	printf("%s ",e1.name);
	printf("%d ",e1.salary);
	
	
	printf("\n%d ",e2.id);
	printf("%s ",e2.name);
	printf("%d ",e2.salary);
	
}
