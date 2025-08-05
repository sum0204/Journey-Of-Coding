#include<stdio.h>
#include<string.h>

int main(){
    char a[]="i,am,student";
    char *p=strtok(a,",");
    while(p!=NULL){
        printf("%s\n",p);
        p=strtok(NULL,",");
    }
    return 0;
}
