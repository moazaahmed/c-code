#include <stdio.h>
int main()
{
    char str1[1000];
    printf("enter the string: ");
    fgets(str1, sizeof(str1), stdin);
    int i,j;
    int len=0;
    int flag=0;
    for(i=0;str1[i]!='\0' && str1[i]!='\n';i++){
        len++;
    }
    for(i=0;i<len/2;i++){
        if(str1[i]!=str1[len-i-1]){
        flag=1;
        break;
        }
    }
    if(flag==1)
    printf("not palindrome");
    else
    printf("palindrome");
    return 0;
}