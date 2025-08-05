#include<stdio.h>
#include<string.h>

int main(){
    char a[30];
    snprintf(a,30,"name=%s age=%d","sumit",21);
    printf("%s",a);
    return 0;
}
