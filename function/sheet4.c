#include<stdio.h>
int calculatetotalpayment(int ar[],int n){
    int totalpayment=0;
    for(int i=0;i<n;i++){
        totalpayment+=ar[i];
    }
    return totalpayment;
}
int calculateattendence(int ar[], int n){
    int absent=0;
    for(int i=0;i<n;i++){
        if(ar[i]==0){
            absent++;
        }
    }
    return absent;
}
int calculatefine(int absent ){
    if(absent>2){
        return (absent -2) * 50;
    }
    else
    return 0;
}
int calculateweeklypayment(int payment, int fine){
    return payment-fine;
}
void suggestion(int absent){
    if(absent>2)
    printf("take action");
    else if(absent>=1)
    printf("monitor");
    else
    printf("satisfy");
}
int main(){
    int i,totalpayment,absent,fine,weeklyPayment;
    int n=7;
    int ar1[n];
    int ar2[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar1[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&ar2[i]);
}
totalpayment=calculatetotalpayment(ar1, n);
absent=calculateattendence(ar2, n);
fine=calculatefine(absent);
weeklyPayment=calculateweeklypayment(totalpayment, fine);
printf("fine amount: %d\n", fine);
printf("weekly payment: %d\n", weeklyPayment);
suggestion(absent);
}
