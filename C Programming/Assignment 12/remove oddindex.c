//7. WAP to Remove the Characters of Odd Index Values in a String

#include<stdio.h>

int main(){
    char a[50],b[50];
    int i,j=0;
    printf("enter string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(i%2==0){
            b[j]=a[i];
            j++;
        }
    }
    b[j]='\0';
    printf("new string: %s",b);
    return 0;
}
