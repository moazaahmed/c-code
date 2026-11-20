#include<stdio.h>
int calculatetotal(int ar[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ar[i];
    }
    return sum;
}
int calculatecurrentAmount(int currentamount,int withdraw,int deposit,int loantaken){
    return currentamount+deposit-withdraw+loantaken;
}
int calculateremainingloan(int previousloan,int loanpaid,int loantaken){
    return (previousloan+loantaken)-loanpaid;
}
int main(){
    int i;
    int n=7;
    int ar[7];
    int withdraw[7],deposit[7],loanpaid[7],loantaken[7],currentamount,previousloan;
    scanf("%d%d",&currentamount,&previousloan);
    for(int i=0;i<n;i++){
        scanf("%d%d%d%d",&withdraw[i],&deposit[i],&loanpaid[i],&loantaken[i]);
    }
    int totalwithdraw=calculatetotal(withdraw, 7);
     int totaldeposit=calculatetotal(deposit, 7);
      int totalloanpaid=calculatetotal(loanpaid, 7);
       int totalloantaken=calculatetotal(loantaken, 7);
       int finalcurrentamount=calculatecurrentamount(currentamount,totalwithdraw,totaldeposit,totalloantaken);
       int remainingloan=calculateremainingloan(previousloan,totalloanpaid,totalloantaken);
        printf("\n---Weekly Summary---\n");

    printf("Total Withdrawals: %d\n", totalwithdraw);
    printf("Total Deposits: %d\n", totaldeposit);
    printf("Total Loan Paid: %d\n", totalloanpaid);
    printf("Total Loan Taken: %d\n",totalloantaken);
    printf("Final Current Amount: %d\n", finalcurrentamount);
    printf("Remaining Loan: %d\n", remainingloan);
}
