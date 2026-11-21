#include<stdio.h>
float calculatediscount(float amount){
    if(amount>=1000){
        return 0.8*amount;
    }
    else if(amount>=500 && amount<=999){
        return 0.9*amount;
    }
    else
    return amount;
}
float addservicecharge(float amount){
    return (amount * .05)+amount;
}
float calculatedeliverycharge(float amount,int distance){
     if(amount>1500){
        return 0;
    }
    else if(distance<=5){
        return 50;
    }
    else if(distance>5){
        return 50+(distance-5)*12;
    }

}
int main(){
    int orderamount,distance;
    scanf("%d%d",&orderamount,&distance);
    float discount=calculatediscount(orderamount);
    float updatedamount=addservicecharge(discount);
    float deliverycharge=calculatedeliverycharge(updatedamount,distance);
    float final=updatedamount+deliverycharge;
    printf("final payable bill: %.2f",final);
}