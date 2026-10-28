#include <stdio.h>
int main()
{
    char str[100] = {0};
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len=0;
    while(str[len]!='\0' && str[len]!='\n'){
        len++;
    }
    for(int i=0; i< len;i++){
        printf("%c ", str[i]);
    }
    return 0;
}