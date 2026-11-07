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
    int i,j,k=0;
    int len=0;
    for(i=0;str1[i]!='\0'&&str1[i]!='\n';i++){
        if(str1[i]>='A' && str1[i]<='Z'){
            str1[i]=str1[i]+32;
            str3[k]=str1[i];
            k++;
        }
        else{
            str3[k]=str1[i];
            k++;
        }
        }
        for(j=0;str2[j]!='\0'&&str2[j]!='\n';j++){
            if(str2[j]>='a'&& str2[j]<='z'){
                str2[j]=str2[j]-32;
                str3[k]=str2[j];
                k++;
            }
            else{str3[k]=str2[j];
                k++;
            }
        }
        str3[k]='\0';
        printf("%s ", str3);
    return 0;
}