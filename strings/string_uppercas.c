#include <stdio.h>
int main()
{
    char str1[1000];
    printf("enter the string: ");
    fgets(str1, sizeof(str1), stdin);
    int i;
    for(i=0;str1[i]!='\0' && str1[i]!='\n';i++){
        if(str1[i]>='a'&& str1[i]<='z'){
            str1[i]=str1[i]-32;
    }
}
    printf("%s", str1);
    return 0;
}