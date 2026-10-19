#include<stdio.h>
int main(){
    int i,n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int elements[n];
    printf("the elements are: ");
    for(i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
    int sorted=1;
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(elements[i] > elements[j]){
                sorted=0;
        }
    }
}
    if(sorted==1)
        printf("array is sorted");
    else
    printf("array is not sorted");
    return 0;
}