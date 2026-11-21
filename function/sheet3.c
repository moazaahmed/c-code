#include<stdio.h>
float calculatescholarship(float cgpa,float amount){
    if(cgpa>=3.75){
        return .7 * amount;
    }
    else if (cgpa>=3.50 && cgpa<3.75){
        return .85 * amount;
    }
    else
    return amount;
}
    float calculatecredit(int cr){
        if(cr<=12){
            return cr*2000;
        }
        else if(cr>12){
           return (12*2000)+((cr-12)*3000);
        }
    }
    float calculateversityfee(float amount){
        return 10*amount+amount;
    }
    int main(){
        float credithour,cgpa,creditfee,scholarship,varsityfee,totalPay;
        scanf("%f%f",&credithour,&cgpa);
        creditfee=calculatecredit(credithour);
        scholarship=calculatescholarship(cgpa, creditfee);
        varsityfee=calculateversityfee(scholarship);
        totalPay=varsityfee;
        printf("Final pay: %.2f",totalPay);
    }