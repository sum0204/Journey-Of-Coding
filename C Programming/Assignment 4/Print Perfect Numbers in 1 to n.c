//3. Print perfect numbers in the given range 1 to n.

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,sum;
	printf("Enter the Number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=0;
		
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				sum+=j;
		}
		if(sum==i)
			printf("%d\n",i);
	}
	
	getch();
}