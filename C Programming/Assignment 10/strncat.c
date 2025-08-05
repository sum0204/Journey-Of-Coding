#include<stdio.h>
#include<string.h>

int main(){
    char a[20]="hello";
    char b[]="world";
    strncat(a,b,3);
    printf("%s",a);
    return 0;
}
