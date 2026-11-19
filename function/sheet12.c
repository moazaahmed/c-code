#include<stdio.h>
int calculatesum(int n){
    int digit,num=n,sum=0;
    while(num!=0){
        digit=num%10;
        sum+=digit;
        num=num/10;
    }
    return sum;
}
int main(){
    int n,sum;
    scanf("%d",&n);
    sum=calculatesum(n);
    printf("sum: %d", sum);
}