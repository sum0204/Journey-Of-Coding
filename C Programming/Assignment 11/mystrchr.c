#include<stdio.h>
#include<conio.h>
char* mystrchr(char* s1,char s2);
void main()
{
	char str[]="hello";
	char* p;
	p=mystrchr(str,'e');
	if(p!='\0')
		printf("First occurence of e :%s",p);
	else
		printf("e not found");
	getch();
}
char* mystrchr(char* s1,char s2)
{
	int i=0;
	while(s1[i]!='\0')
	{
		if(s1[i]==s2)
			return &s1[i];
		i++;
	}
	return '\0';
	
}