#include<stdio.h>
#include<string.h>

int main(){
    char a[]="computer";
    char *p=strstr(a,"put");
    printf("%s",p);
    return 0;
}
