/*7. Take two array and add sum in third array

Example-
arr[5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,1};
	int sum[5];
	int i;
	for(i=0;i<5;i++)
	{
		sum[i]=arr1[i]+arr2[i];
		printf("Sum Of Array 1 [%d] And Array 2 [%d] : %d\n",arr1[i],arr2[i],sum[i]);
	}
	
	getch();
}
