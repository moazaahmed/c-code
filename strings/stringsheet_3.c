#include <stdio.h>
int main()
{
    char str[100] = {0};
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len=0;
    int temp;
    while(str[len]!='\0' && str[len]!='\n'){
        len++;
    }
    for(int i=0; i< len / 2 ;i++){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    printf("reverse order:%s", str);
    return 0;
}