#include <stdio.h>
int main()
{
    char str[100] = {0};
    int i,j;
    int max=0;
    int count;
    char max_char;
    printf("enter string: ");
    fgets(str, sizeof(str), stdin);
    for(i=0;str[i]!='\0'&& str[i]!='\n';i++){
        count=0;
        for(j=0;str[j]!='\0'&& str[j]!='\n';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
    if(count>max){
        max=count;
        max_char=str[i];
    }
    }
    printf("most appearence: %c", max_char);
    printf("\nnumber of appearence: %d", max);
    return 0;
}