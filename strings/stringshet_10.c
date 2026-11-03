#include <stdio.h>
int main()
{
    char str1[1000];
    char str2[1000];
    char str3[1000];
    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);
     printf("enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    int i,j=0;
    int len=0;
    for(i=0;str1[i]!='\0' && str1[i]!='\n';i++){
        if((str1[i]>='A'&& str1[i]<='Z')||(str1[i]>='a'&& str1[i]<='z')){
            str3[j]=str1[i];
            j++;
        }
    }
        for(i=0;str2[i]!='\0' && str2[i]!='\n';i++){
        if((str1[i]>='A'&& str1[i]<='Z')||(str1[i]>='a'&& str1[i]<='z')){
            str3[j]=str2[i];
            j++;
        }
    }
        str3[j]='\0';
        printf("%s", str3);
    return 0;
}