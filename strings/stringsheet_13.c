#include <stdio.h>
int main()
{
    char str[100];
    printf("enter the string: ");
    fgets(str, sizeof(str), stdin);
    char s[100];
    printf("enter a speical character: ");
    scanf("%c",&s[0]);
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            str[i]=s[0];
        }
    }
    str[i]='\0';
    printf("%s", str);
    return 0;
}