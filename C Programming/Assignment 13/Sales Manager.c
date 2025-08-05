// 5. SalesManager (id, name, salary, incentive, target)

struct salesmanager
{
	int id;
	char name[20];
	int salary;
	double incentive;
	int target;
};

void main()
{
	struct salesmanager sm1,sm2;
	printf("Enter the Id , Name , Salary , Incentive and Target of Sales Manager 1 :");
	scanf("%d",&sm1.id);
	scanf("%s",&sm1.name);
	scanf("%d",&sm1.salary);
	scanf("%lf",&sm1.incentive);
	scanf("%d",&sm1.target);
	
	
	printf("Enter the Id , Name , Salary , Incentive and Target of Sales Manager 2 :");
	scanf("%d",&sm2.id);
	scanf("%s",&sm2.name);
	scanf("%d",&sm2.salary);
	scanf("%lf",&sm2.incentive);
	scanf("%d",&sm2.target);
	
	printf("%d ",sm1.id);
	printf("%s ",sm1.name);
	printf("%d ",sm1.salary);
	printf("%.2lf ",sm1.incentive);
	printf("%d ",sm1.target);	
	
	printf("\n%d ",sm2.id);
	printf("%s ",sm2.name);
	printf("%d ",sm2.salary);
	printf("%.2lf ",sm2.incentive);
	printf("%d ",sm2.target);
}
