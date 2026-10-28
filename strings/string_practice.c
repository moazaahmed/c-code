#include <stdio.h>
int main()
{
    char str[100] = {0};
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len;
    for(len=0;str[len]!='\0' && str[len]!='\n';len++){
        printf("%c ", str[len]);
    }
    return 0;
}