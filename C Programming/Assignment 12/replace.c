// 2. WAP Replace all Occurrences of ‘a’ with $ in a String
#include<stdio.h>

int main(){
    char a[50];
    int i;
    printf("enter string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='a')
            a[i]='$';
    }
    printf("new string: %s",a);
    return 0;
}
