#include<stdio.h>
int main(){
 int m,n;
 int sum=0;
 int product=1;
 printf("enter number of rows and columns: ");
 scanf("%d %d",&m,&n);
 int ar[m][n];
 printf("elements are:");
 for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    scanf("%d",&ar[i][j]);
    sum+=ar[i][j];
    product*=ar[i][j];
  }
}
printf("sum is %d\n", sum);
printf("porduct is %d\n", product);
return 0;
}