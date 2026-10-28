#include<stdio.h>
int main(){
 int m,n;
 printf("enter number of rows and columns: ");
 scanf("%d %d",&m,&n);
 int ar[m][n];
 printf("elements are:");
 for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    scanf("%d",&ar[i][j]);
}
}for(int j=0;j<n;j++){
   int sum=0;
 int product=1;
 for(int i=0;i<m;i++){
  sum+=ar[i][j];
  product*=ar[i][j];
 }
 printf("column %d:sum=%d and product is %d\n", j+1, sum, product);
}
return 0;
}