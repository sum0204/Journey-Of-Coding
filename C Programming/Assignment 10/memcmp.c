#include<stdio.h>
#include<string.h>

int main(){
    char a[]="abc";
    char b[]="abd";
    int x=memcmp(a,b,2);
    printf("%d",x);
    return 0;
}
