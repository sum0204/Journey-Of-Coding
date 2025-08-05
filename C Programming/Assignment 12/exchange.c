// 4. WAP to Form a New String where the First Character and the Last Character have been Exchanged
#include<stdio.h>
#include<string.h>

int main(){
    char a[50],t;
    int l;
    printf("enter string: ");
    gets(a);
    l=strlen(a);
    t=a[0];
    a[0]=a[l-1];
    a[l-1]=t;
    printf("new string: %s",a);
    return 0;
}
