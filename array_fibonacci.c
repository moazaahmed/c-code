#include<stdio.h>
int main(){
 int n;
 int ar[100];
 int i;
 printf("enter number of terms: ");
 scanf("%d",&n);
 ar[0]=0;
 ar[1]=1;
 for(i=2;i<n;i++){
  ar[i]=ar[i-1] + ar[i-2];
 }
 printf("fibonacci series: ");
 for(i=0;i<n;i++){
  printf("%d ", ar[i]);
 }

return 0;
}
