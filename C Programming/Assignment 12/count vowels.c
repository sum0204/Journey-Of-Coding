// 5. WAP to Count the Number of Vowels in a String
#include<stdio.h>

int main(){
    char a[50];
    int i,c=0;
    printf("enter string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
           a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            c++;
        }
    }
    printf("vowels=%d",c);
    return 0;
}
