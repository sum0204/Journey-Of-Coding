// 8. Merge two arrays

void main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,10};
	int merge[10],i=0;
	
	for(i=0;i<5;i++)
		merge[i]=arr1[i];
	for(i=0;i<5;i++)
		merge[i+5]=arr2[i];
	for(i=0;i<10;i++)
		printf("\n Here is the Merging the Two Arrays : %d",merge[i]);
}