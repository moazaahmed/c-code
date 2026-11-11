#include<stdio.h>
int main(){
    char str1[1000];
    fgets(str1, 1000, stdin);
    char str2[1000];
    fgets(str2, 1000, stdin);
    char str3[1000];
    int len=0;
    int i;
    int k=0;
    for(i=0;str1[i]!='\0'&& str1[i]!='\n';i++){
        len++;
    }
    for(i=0;str2[i]!='\0'&& str2[i]!='\n';i++){
        if(str2[i]=='U'){
            str2[i]=str2[i]+32;
        }
        else if(str2[i]=='i'){
            str2[i]=str2[i]-32;
        }
        str3[k]=str2[i];
            k++;
        }
    for(i=len-1;i>=0;i--){
        if(str1[i]>='a'&& str1[i]<='z'){
            str1[i]=str1[i]-32;
            str3[k]=str1[i];
            k++;
        }
    }
    str3[k]='\0';
    printf("%s", str3);
    return 0;
}
