#include<stdio.h>
#include<string.h>

int main(){
    char a[20]="hi";
    char b[]="hello";
    strcat(a,b);
    printf("%s",a);
    return 0;
}
