#include<stdio.h>
int main(){
 int m,n;
 printf("enter number of rows and columns: ");
 scanf("%d %d",&m,&n);
 int ar[m][n];
 int even=0;
 int odd=0;
 printf("elements are:");
 for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    scanf("%d",&ar[i][j]);
}
}for(int i=0;i<m;i++){
 for(int j=0;j<n;j++){
  if(ar[i][j]%2 ==0){
    even++;
    printf("%d is even\n",ar[i][j]);
  }
  else{
    odd++;
    printf("%d is odd\n",ar[i][j]);
  }
 }
}
 printf("total number of even:%d\n", even);
 printf("total number of odd:%d", odd);

return 0;
}