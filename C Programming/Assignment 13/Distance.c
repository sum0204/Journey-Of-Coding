//8. Distance ( feet, inch)

struct Distance 
{
	int feet,inch;
};
void main()
{
	struct Distance d;
	
	printf("Enter the Feet : ");
	scanf("%d",&d.feet);
	
	printf("Enter the Inch : ");
	scanf("%d",&d.inch);
	
	if(d.inch >= 12) {
        d.feet += d.inch / 12;
        d.inch = d.inch % 12;
    }
	
	printf("The Distance is the %d feet %d inch",d.feet,d.inch);
	
}