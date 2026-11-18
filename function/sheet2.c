#include<stdio.h>
float CalculateDiscount(float amount){
    if(amount >= 1000){
        return amount * 0.8;
    }
    else if(amount>=500 && amount<999){
        return amount * 0.9;
    }
    else
    return amount;
}
float AddServiceCharge(float amount){
    return .05 * amount + amount;
}
float deliveryCharge(float amount, int distance){
    if (distance<=5){
        return 50;
    }
        else if(distance> 5){
            return (50)+((distance -5) * 12);
        }
        else if(amount>1500){
            return 0;
        }
    }
    int main(){
        float amount;
        float distance,discount,srvicecharge,deliverycharge;
        scanf("%f%f",&amount,&distance);
        discount=CalculateDiscount(amount);
        srvicecharge=AddServiceCharge(discount);
        deliverycharge=(srvicecharge, distance);
        float FinalBill=deliverycharge+srvicecharge;
        printf("final bill: %.2f$", FinalBill);
    }