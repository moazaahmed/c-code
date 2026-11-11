#include <stdio.h>
int main()
{
    char str1[1000];
    fgets(str1, 1000, stdin);
    int i;
    int palindrome=1;
    int len=0;
    for(i=0;str1[i]!='\0' && str1[i]!='\n';i++){
        len++;
    }
    for(i=0;i<len/2;i++){
        if(str1[i]!=str1[len-i-1]){
            palindrome=0;
            break;
        }
    }
    if(palindrome==1)
    printf("palindrome");
    else
    printf("not palindrome");
    return 0;
}