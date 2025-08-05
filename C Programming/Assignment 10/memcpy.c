#include<stdio.h>
#include<string.h>

int main(){
    char a[]="data";
    char b[10];
    memcpy(b,a,5);
    printf("%s",b);
    return 0;
}
