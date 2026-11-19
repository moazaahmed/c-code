#include<stdio.h>
int calculatereverse(int n){
    int digit,num=n,reverse=0;
    while(num!=0){
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    return reverse;
}
int main(){
    int n,reverse;
    scanf("%d",&n);
    reverse=calculatereverse(n);
    printf("reverse number: %d", reverse);
}