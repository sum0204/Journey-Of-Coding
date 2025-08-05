//1. Find minimum and maximum number in array.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]={50,1000,80,1,500};
	int i,max,min;
	min=max=arr[0];
	
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];	
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
				
	}
	printf("Maximum Number is : %d\n",max);
	printf("Minimum Number is : %d",min);
	getch();
}