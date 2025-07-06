/*5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	double price,total_price;
	char ch;
	
	printf("Enter the Price :");
	scanf("%lf",&price);
	fflush(stdin);
	printf("Are you student(y/n) : ");
	scanf("%c",&ch);
	
	if(ch=='y')
	{
		if(price>500)
		{
			total_price=price-price*0.20;
		}
		else
		{
				total_price=price-price*0.10;
		}
		printf("Total price is : %.2lf",total_price);	
	}
		else if(ch=='n')
		{	
			if(price>600)
			{
				total_price=price-price*0.15;
				printf("Total price is : %.2f",total_price);
			}
			else
			{
				printf("Discount available above 600 if you are not student",price);
			}
		}
	getch();
}