#include<stdio.h>
int main(){
    int i;
    int n =7;
    int a[7];
    int pos=0;
    printf("termeratures are: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int hottest=a[0];
    for(i=0;i<n;i++){
        if(a[i] > hottest){
            hottest=a[i];
            pos=i;
        }
    }
    printf("%d day is the hottest day",pos+1);
    return 0;
}