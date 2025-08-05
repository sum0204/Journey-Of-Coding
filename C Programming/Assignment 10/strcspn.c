#include<stdio.h>
#include<string.h>

int main(){
    char a[]="hi123";
    int x=strcspn(a,"123");
    printf("%d",x);
    return 0;
}
