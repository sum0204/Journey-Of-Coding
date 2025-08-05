#include<stdio.h>
#include<conio.h>
int mystrcmp(char* a,char* b);
int main()
{
	char s1[]="hi";
	char s2[]="hi";
	int res=mystrcmp(s1,s2);
	if(res==0)
		printf("String is same");
	else
		printf("String is not same");
	getch();
}
int mystrcmp(char* a,char* b)
{
	int i=0;
	while(a[i]!='\0'&&b[i]!='\0')
	{
		if(a[i]!=b[i])
			return 1;
		i++;
	}
	if(a[i]=='\0'&&b[i]=='\0')
		return 0;
	else 
		return 1;
}