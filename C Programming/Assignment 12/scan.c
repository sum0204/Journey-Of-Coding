//1. Write a program to scan string from user then scan a single character and search it in a accepted string.
#include<stdio.h>

int main(){
    char a[50],ch;
    int i,f=0;
    printf("enter string: ");
    gets(a);
    printf("enter char to search: ");
    scanf("%c",&ch);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==ch){
            f=1;
            break;
        }
    }
    if(f==1)
        printf("found");
    else
        printf("not found");
    return 0;
}
