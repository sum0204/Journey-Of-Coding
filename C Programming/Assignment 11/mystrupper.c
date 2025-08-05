#include<stdio.h>
#include<conio.h>
char* mystrupper(char* );
void main()
{
	char str[]="hi sumit";
	mystrupper(str);

	printf("Upper String : %s",str);
	getch();
	
}
char* mystrupper(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;	
		}
		i++;
	}
	return str;
}