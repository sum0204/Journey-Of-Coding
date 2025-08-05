//2. Search the given number in array.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]={10,20,30,50,40};
	int s,f=0;
	
	printf("Enter the Number :");
	scanf("%d",&s);
	for(int i=0;i<5;i++)
	{
		if(arr[i]==s)
		{
			printf("%d Number is found ",s);
			f=1;
			break;	
		}
	}
	if(!f)
		printf("Number is not found");
	getch();
}