#include<stdio.h>
int main(){
    int i,n;
    int len,start;
    char str[100];
    char substr[100];
    printf("enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("enter starting position");
    scanf("%d",&start);
    printf("enter substring size: ");
    scanf("%d",&len);
    for(i=0;i<len;i++){
        substr[i]=str[start+i-1];
    }
    substr[i]='\0';
    printf("substring: %s", substr);
    return 0;
}