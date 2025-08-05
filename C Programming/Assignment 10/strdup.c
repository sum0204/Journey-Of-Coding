#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char a[]="test";
    char *b=strdup(a);
    printf("%s",b);
    free(b);
    return 0;
}
