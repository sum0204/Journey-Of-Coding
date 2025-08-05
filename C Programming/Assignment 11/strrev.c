#include<stdio.h>
#include<conio.h>
char* mystrrev(char*);
void main()
{
	char str[]="hello";
	mystrrev(str);

	printf("Reversed String : %s",str);
	getch();
	
}
char* mystrrev(char* str)
{
	int s=0;
	int e=0;
	while(str[e]!='\0')
	{
		e++;
	}
	e--;	
		while(s<e)
		{
			char temp=str[s];
			str[s]=str[e];
			str[e]=temp;
			
			s++;
			e--;	
		}
	return str;
}