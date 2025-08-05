//3. Find sum of all numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]={10,55,14,12,365};
	int i=0,sum=0;
	
	while(i<5)
	{
		printf("Array is : %d\n",arr[i]);
		sum=sum+arr[i];
		i++;
	}
	printf("Sum is %d\n",sum);
	getch();
}