#include<stdio.h>
#include<string.h>

int main(){
    char a[]="program";
    char *p=strrchr(a,'r');
    printf("%s",p);
    return 0;
}
