#include<stdio.h>
int main(){
    char operator;
    float num1,num2;
    printf("enter first number: ");
    scanf("%f",&num1);
    printf("enter second number: ");
    scanf("%f",&num2);
    printf("enter operator(+,-,*,/): ");
    scanf(" %c",&operator);
    switch(operator){
        case '+':
        printf("result:%.2f", num1+num2);
        break;
        case '-':
        printf("result:%.2f", num1-num2);
        break;
        case '*':
        printf("result:%.2f", num1*num2);
        break;
        case '/':
        if(num2==0){
            printf("denumerator can't be 0!");
        }
        else
        printf("result:%.2f", num1/num2);
        break;
        default:
        printf("entered wrong operator!");

    }
    return 0;

}