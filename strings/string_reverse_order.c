#include <stdio.h>
int main()
{
    char str1[1000];
    printf("enter the string: ");
    fgets(str1, sizeof(str1), stdin);
    int i,j;
    int len=0;
    for(i=0;str1[i]!='\0' && str1[i]!='\n';i++){
        len++;
    }
        for(i=len-1;i>=0;i--){
            printf("%c", str1[i]);
        }
    return 0;
}