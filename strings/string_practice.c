#include <stdio.h>
int main()
{
    char str1[1000];
    char str2[1000];
    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);
     printf("enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    int i,j;
    int len=0;
    for(i=0;str1[i]!='\n' && str1[i]!='\n';i++){
        len++;
    }
    for(j=0;str2[j]!='\n' && str2[j]!='\n';j++){
        if(str2[j]=='u'||str2[j]=='i'){
            str2[j]=str2[j]-32;//for(j=len-1;str2[j]!='\n' && str2[j]!='\n';j--)
        }
    }
    for(i=len-1;i>=0;i--){
        if(str1[i]>='a'&& str1[i]<='z'){
            str1[i]=str1[i]-32;
            str2[j]=str1[i];
            j++;
        }
    }
        str2[j]='\0';
        printf("%s", str2);
    return 0;
}