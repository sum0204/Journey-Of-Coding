#include<stdio.h>
#include<string.h>

int main(){
    char a[]="college";
    char b[10];
    strncpy(b,a,4);
    b[4]='\0';
    printf("%s",b);
    return 0;
}
