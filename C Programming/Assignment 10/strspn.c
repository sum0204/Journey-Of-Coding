#include<stdio.h>
#include<string.h>

int main(){
    char a[]="abc123";
    int x=strspn(a,"abc");
    printf("%d",x);
    return 0;
}
