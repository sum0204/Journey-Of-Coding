// 9. WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions
#include<stdio.h>

int main(){
    char a[50],b[50];
    int i,j,c1=0,c2=0;
    printf("enter 1st string: ");
    gets(a);
    printf("enter 2nd string: ");
    gets(b);
    for(i=0;a[i]!='\0';i++)
        c1++;
    for(j=0;b[j]!='\0';j++)
        c2++;
    if(c1>c2)
        printf("larger: %s",a);
    else
        printf("larger: %s",b);
    return 0;
}

