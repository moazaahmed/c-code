#include <stdio.h>
int main()
{
    char str[100] = {0};
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("display:%s ", str);
    return 0;
}