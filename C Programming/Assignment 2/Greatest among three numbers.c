//3. Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers :");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%d is greater",a);
		else
			printf("%d is greater",c);
	}
	else
	{
		if(b>c)
			printf("%d is greater",b);
		else 
			printf("%d is greater",c);
	}
	getch();
}