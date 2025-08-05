#include<stdio.h>
#include<conio.h>

int mystrlength(char s[]);
void main()
{
	char str[]="Hiii";
	int length=mystrlength(str);
	printf("Length of String : %d",length);
	getch();
}
int mystrlength(char s[])
{
	int i =0;
	while(s[i]!='\0')
	{
		i++;		
	}
	return i;
}