//4. Find odd and even among the numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],n,i=0;
	
	printf("How Many Numbers : ");
	scanf("%d",&n);
	printf("The Array is : ");
	
	while(i<n)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	i=0;
	while(i<n)
	{
		if(arr[i]%2==0)
			printf("\n%d Even Number\n",arr[i]);
		else
			printf("\n%d Odd Number\n",arr[i]);
		i++;
	}
	getch();
}