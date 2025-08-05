// 10. Sort the array.

void main()
{
	int arr[5]={1,3,4,2,5};
	int i,j,temp;
	
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}		
	}
	printf("Sorted Array :");
	for(i=0;i<5;i++)
		printf("%d",arr[i]);
}