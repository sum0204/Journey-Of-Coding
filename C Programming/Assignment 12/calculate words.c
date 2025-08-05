//8. WAP to Calculate the Number of Words Present in a String
#include<stdio.h>

int main(){
    char a[100];
    int i,c=1;
    printf("enter string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==' ')
            c++;
    }
    printf("words=%d",c);
    return 0;
}
