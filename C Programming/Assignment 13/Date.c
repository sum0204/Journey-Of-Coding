//6. Date (date, month, year)

struct date
{
	int date;
	int month;
	int year;
};
void main()
{
	struct date d;
	
	printf("Enter the Date : ");
	scanf("%d",&d.date);
	
	printf("Enter the Month : ");
	scanf("%d",&d.month);
	
	printf("Enter the Year : ");
	scanf("%d",&d.year);
	
	printf("Entered Date will be :\n %d-%d-%d",d.date,d.month,d.year);
}