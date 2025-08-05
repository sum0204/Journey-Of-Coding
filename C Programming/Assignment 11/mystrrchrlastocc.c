#include<stdio.h>
#include<conio.h>
char* mystrrchr(char* s1,char s2);
void main()
{
	char str[]="hello";
	char* p;
	p=mystrrchr(str,'l');
	if(p!='\0')
		printf("last occurence of l :%s",p);
	else
		printf("l not found");
	getch();
}
char* mystrrchr(char* s1,char s2)
{
	char* lt;
	int i=0;
	while(s1[i]!='\0')
	{
		if(s1[i]==s2)
			lt= &s1[i];
		i++;
	}
	return lt;
	
}
