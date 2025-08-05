#include<stdio.h>
#include<conio.h>

char* mystrcpy(char* dest, char* src);
void main()
{
	char str[]="Hii";
	char org[10];
	mystrcpy(org,str);
	printf("Copied String : %s",org);
	getch();
}
char* mystrcpy(char* dest,char* src)
{
	int i=0;
	while(src[i]!='\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
	return dest;
}

