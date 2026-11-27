#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int ar[n];
    int *ptr=ar;
    for(i=0;i<n;i++){
        scanf("%d",ar+i);
    }
    int even=0;
    int odd=0;
    for(i=0;i<n;i++){
        if(*(ar+i)%2==0){
            even++;
        }
        else
        odd++;
    }
    printf("even count= %d\n", even);
    printf("odd count= %d", odd);
}


        




