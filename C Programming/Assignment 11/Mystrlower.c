#include<stdio.h>
#include<conio.h>
char* mystrlower(char* );
void main()
{
	char str[]="HI SUMIT";
	mystrlower(str);

	printf("Lower String : %s",str);
	getch();
	
}
char* mystrlower(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]+32;	
		}
		i++;
	}
	return str;
}