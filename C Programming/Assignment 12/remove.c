//3. WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>

int main(){
    char a[50];
    int i,n;
    printf("enter string: ");
    gets(a);
    printf("enter index: ");
    scanf("%d",&n);
    for(i=n;a[i]!='\0';i++){
        a[i]=a[i+1];
    }
    printf("new string: %s",a);
    return 0;
}
