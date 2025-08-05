// 7. Time (hour, min, sec)

struct Time
{
	int hr;
	int min;
	int sec;
};

void main()
{
	struct Time t;
	
	printf("Enter The Hour : ");
	scanf("%d",&t.hr);
	
	printf("Enter the Minute : ");
	scanf("%d",&t.min);
	
	printf("Enter the Second : ");
	scanf("%d",&t.sec);
	
	printf("The Time is %d Hours %d Minutes %d Seconds",t.hr,t.min,t.sec);
}