#include<stdio.h>

void getStudent(float *price,char *isStudent);
void main()
{
    float price;
    char isStudent;

    printf("Enter the purchase amount: ");
    scanf("%f",&price);

    printf("Are you a student (y/n): ");
    scanf(" %c",&isStudent);

    getStudent(&price,&isStudent);
}

void getStudent(float *price,char *isStudent)
{
    float discount = 0,final_price;

    if(*isStudent == 'y' || *isStudent == 'Y')
	{
        if(*price > 500)
            discount = 0.20 * (*price);
        else
            discount = 0.10 * (*price);
    }
	else
	{
        if(*price > 600)
            discount = 0.15 * (*price);
        else
            discount = 0.0;
    }

    final_price = *price - discount;

    printf("Discount: %.2f\n", discount);
    printf("Final price to pay: %.2f\n", final_price);
}
