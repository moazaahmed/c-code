#include <stdio.h>
int main()
{
    char str1[1000];
    printf("enter the string: ");
    fgets(str1, sizeof(str1), stdin);
    int i,j;
    int len=0;
    int digit=0;
    int alphabet=0;
    int speical_character=0;

    for(i=0;str1[i]!='\0' && str1[i]!='\n';i++){
        len++;
        if((str1[i]>='A'&& str1[i]<='Z')||(str1[i]>='a'&& str1[i]<='z')){
        alphabet++;
        }
        else if(str1[i]>='0'&& str1[i]<='9'){
        digit++;
        }
        else{
        speical_character++;
        }
    }
    printf("digit: %d\n", digit);
    printf("alphabet: %d\n", alphabet);
    printf("speical character: %d\n", speical_character);

    return 0;
}