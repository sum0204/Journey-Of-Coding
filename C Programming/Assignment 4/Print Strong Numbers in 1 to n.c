//4. Print strong numbers in the given range 1 to n.

#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,j,sum,rem,num,fact;
	
	printf("Enter the Number :");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		num=i;
		sum=0;
		
		while(num>0)
		{
			rem=num%10;
			fact=1;
			
			for(j=1;j<=rem;j++)
			{
				fact*=j;
			}
			sum+=fact;
			num/=10;
		}
		if(sum==i)
			printf("%d\n",i);
	}
	getch();
}