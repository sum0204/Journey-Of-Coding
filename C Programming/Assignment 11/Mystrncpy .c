#include<stdio.h>
#include<conio.h>

char* mystrncpy(char* , char* ,int);
void main()
{
	char str[]="Hii";
	char org[10];
	mystrncpy(org,str,1);
	printf("Copied String : %s",org);
	getch();
}
char* mystrncpy(char* dest,char* src, int n)
{
	int i;
	for(i=0;i<n&&src[i]!='\0';i++)
		dest[i]=src[i];
	
	for(;i<n;i++)
		dest[i]='\0';
		
	return dest;
}

