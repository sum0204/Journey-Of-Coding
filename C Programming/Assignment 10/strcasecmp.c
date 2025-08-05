#include<stdio.h>
#include<string.h>

int main(){
    char a[]="Hello";
    char b[]="hello";
    int x=strcasecmp(a,b);
    printf("%d",x);
    return 0;
}
