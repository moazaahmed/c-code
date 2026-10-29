#include <stdio.h>
int main()
{
    char str1[100] = {0};
    char str2[100] = {0};
    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    int equal=1;
    int len=0;
    while(str1[len]!='\0' && str2[len]!='\0'){
        if(str1[len]!=str2[len]){
            equal=0;
            break;
        }
        len++;
    }
    if(str1[len]!=str2[len]){
        equal=0;
    }
     if(equal==1)
    printf("equal");
    else
    printf("not equal");
    return 0;
}