//2. Print prime numbers in the given range 1 to n.

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,count;
	
	printf("Enter the Number :");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		count=0;
		
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
	if(count==2)
		printf("%d\n",i);	
	}	
	getch();
}