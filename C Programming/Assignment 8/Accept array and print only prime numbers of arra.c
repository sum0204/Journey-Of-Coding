// 6. Accept array and print only prime numbers of array.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],n,i=0,flag;
	printf("How Many Numbers: ");
	scanf("%d",&n);
	
	printf("Array is : ");
	
	int found=0;
		
	while(i<n)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	i=0;
	
	int j=0;
	
	while(i<n)
	{
		flag=1;
		if(arr[i]<=1)
			flag=0;
		else
			{
				for(j=2;j<arr[i];j++)
				{
					if(arr[i]%j==0)
					{
						flag=0;
						break;
					}
				}
			}
		if(flag==1)
			{
				printf("\n%d is Prime \n",arr[i]);
				found++;
			}
		//printf("\nChecked : %d",arr[i]);
		i++;
	}
	if(found==0)
		printf("Number in the Array is Not Prime Numbers\n");
	getch();
}