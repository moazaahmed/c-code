#include<stdio.h>
int main(){
   int i,n;
   printf("number of score: ");
   scanf("%d",&n);
   int ar[n];
   printf("the numbers are: ");
   for(i=0;i<n;i++){
    scanf("%d",&ar[i]);
   }
   long long gained=0;
   long long lost=0;
   for(i=0;i<n;i++){
    if(ar[i] > 0){
        gained+=ar[i];
    }
    else if(ar[i] < 0){
        lost+=-ar[i];
    }
   }
   printf("total gained: %lld\n", gained);
   printf("total lost: %lld\n", lost);
   if(gained >lost){
    printf("gained more point!\n");
   }
   else if(lost==gained){
    printf("tie!\n");
   }
   else{
    printf("lost more point!");
   }
   return 0;
}