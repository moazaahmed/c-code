#include<stdio.h>
int main(){
    int i,n;
    printf("enter number of scores: ");
    scanf("%d",&n);
    int ar[n];
    printf("scores are: ");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int gained=0;
    int lost=0;
    for(i=0;i<n;i++){
        if(ar[i] > 0){
            gained+=ar[i];
        }
        else if(ar[i] < 0){
            lost+=-ar[i];
        }
    }
    printf("total points gained: %d\n", gained);
    printf("total points lost: %d\n", lost);
    if(gained > lost){
        printf("gained more than lost!\n");
    }
    else if(gained==lost){
        printf("tie!\n");
    }
    else
    printf("lost more than gained!");
    return 0;
}
