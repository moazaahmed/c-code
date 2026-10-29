#include <stdio.h>
int main()
{
    char str[100] = {0};
    printf("enter string: ");
    fgets(str, sizeof(str), stdin);
    int len=0;
    int vowel_count=0;
    int consonant_count=0;
    int i;
    while(str[len]!='\0' && str[len]!='\n'){
    if(str[len]=='a'||str[len]=='e'||str[len]=='i'||str[len]=='o'||str[len]=='u'){
        vowel_count++;
    }
    else if((str[len]!='a'||str[len]!='e'||str[len]!='i'||str[len]!='o'||str[len]!='u')&&(str[len]>='a' && str[len]<='z')){
         consonant_count++;
    }
    len++;
}
    printf("vowel:%d", vowel_count);
    printf("\nconsonant:%d", consonant_count);
    return 0;
}