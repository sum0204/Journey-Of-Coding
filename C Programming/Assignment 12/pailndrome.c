//10. Write a program to check the string is palindrome or not.

#include<stdio.h>
#include<string.h>

int main(){
    char a[50],b[50];
    int i,j=0,l,f=1;
    printf("enter string: ");
    gets(a);
    l=strlen(a);
    for(i=l-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    for(i=0;a[i]!='\0';i++){
        if(a[i]!=b[i]){
            f=0;
            break;
        }
    }
    if(f==1)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}
