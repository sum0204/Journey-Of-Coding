#include<stdio.h>
#include<string.h>

int main(){
    char a[]="hello";
    char b[]="bye";
    int x=strncmp(a,b,2);
    printf("%d",x);
    return 0;
}
