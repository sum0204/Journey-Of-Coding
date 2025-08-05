// 5. Print alternate elements in array.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]={10,20,30,40,50};
	int i=0;
	
	while(i<5)
	{
		printf("Alternate Numbers : %d\n",arr[i]);
		i+=2;
	}
	getch();
}