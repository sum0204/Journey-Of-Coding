/*5. Write a menu driven program to take a number for user and perform operations as follows.

Press 1.To check number is even or odd.
2.To check number is prime or not.
3.To check number is pallindrome or not.
4.To check number is positive, negative or zero.
5.To reverse a number.
6.To find sum of digits.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,ch,no,rev,d,temp,sum,count;
	
	for(i=0;i<1;i++)
	{
		printf("Enter the Number :");
		scanf("%d",&no);
		
		for(j=0;j<1;j++)
		{
			printf("Menu:\n");
			printf("Press 1.To check number is even or odd.\n");
            printf("2. To check number is prime or not\n");
            printf("3. To check number is palindrome or not\n");
            printf("4. To check number is positive, negative or zero\n");
            printf("5. To reverse the number\n");
            printf("6. To find sum of digits\n");
            printf("Enter your choice: ");
            scanf("%d", &ch);
            
            if(ch==1)
            {
            	if(no%2==0)
					printf("Even Number");
				else
					printf("Odd Number");
			}
			else if(ch==2)
			{
				count=0;
                for(i=1;i<=no;i++) 
				{
                	if(no%i==0)
                    	count++;
				}
				if(count==2)
					printf("Prime Number");
				else
					printf("Not Prime Number");
			}
            else if(ch==3)
            {
            	temp=no;
                rev=0;
                for(i=temp;i!=0;i=i/10)
				{
                    d=i%10;
                    rev=rev*10+d;
                }
                if(rev==no)
                    printf("Palindrome Number");
                else
                    printf("Not Palindrome Number");
			}
			else if(ch==4)
			{
				if(no>0)
                    printf("Positive Number");
                else if(no<0)
                    printf("Negative Number");
                else
                    printf("Zero");
			}
			else if(ch==5)
			{
				temp=no;
                rev=0;
                for(i=temp;i!=0;i=i/10) 
				{	
                    d=i%10;
                    rev=rev*10+d;
                }
                printf("Reversed number is %d",rev);
			}
			else if(ch==6)
			{
				temp=no;
                sum=0;
                for(i=temp;i!=0;i=i/10) 
				{
                    d=i%10;
                    sum+=d;
                }
                printf("Sum of digits = %d",sum);			
			}            
			else 
				printf("Invalid Choice");
		}
	}
	getch();
}