#include<stdio.h>
#include<string.h>

int main(){
    char a[]="school";
    char *p=strchr(a,'o');
    printf("%s",p);
    return 0;
}
