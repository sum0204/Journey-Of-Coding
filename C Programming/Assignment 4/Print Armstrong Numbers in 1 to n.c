//1. Print armstrong numbers in the given range 1 to n.

#include <stdio.h>
#include<conio.h>


int main() {
    int n, i, temp, digit, sum, count;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
	{
        temp = i;
        count = 0;
        
        while(temp > 0) 
		{
            count++;
            temp /= 10;
        }

        temp = i;
        sum = 0;
        
        while(temp > 0) 
		{
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if(sum == i)
            printf("%d\n", i);
    }

    getch();
}
