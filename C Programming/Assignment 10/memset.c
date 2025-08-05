#include<stdio.h>
#include<string.h>

int main(){
    char a[10];
    memset(a,'*',5);
    a[5]='\0';
    printf("%s",a);
    return 0;
}
