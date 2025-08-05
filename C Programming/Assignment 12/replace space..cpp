//6. WAP to Take in a String and Replace Every Blank Space with special symbol.
#include<stdio.h>

int main(){
    char a[50];
    int i;
    printf("enter string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==' ')
            a[i]='@';
    }
    printf("new string: %s",a);
    return 0;
}
