// 1. Student (rollNo, name, marks)

struct student
{
	int rollno;
	char name[20];
	int marks;
};

void main()
{
	struct student s1,s2;
	printf("Enter the Rollno , Name and Marks of Student 1 :");
	scanf("%d",&s1.rollno);
	scanf("%s",&s1.name);
	scanf("%d",&s1.marks);
	
	printf("Enter the Rollno , Name and Marks of Student 2 :");
	scanf("%d",&s2.rollno);
	scanf("%s",&s2.name);
	scanf("%d",&s2.marks);
	
	printf("%d ",s1.rollno);
	printf("%s ",s1.name);
	printf("%d ",s1.marks);
	
	
	printf("\n%d ",s2.rollno);
	printf("%s ",s2.name);
	printf("%d ",s2.marks);
	
}
