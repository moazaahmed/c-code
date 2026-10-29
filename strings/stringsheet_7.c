#include <stdio.h>
int main()
{
    char str1[100] = {0};
    char str2[100] = {0};
    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    int len=0;
    int i;
    while(str1[len]!='\0' && str1[len]!='\n'){
        len++;
    }
        for(i=0;i<len;i++){
            str2[i]=str1[i];
        }
        printf("second string: %s",str2);
    return 0;
}