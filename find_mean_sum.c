#include <stdio.h>
int main()
{
  int ar[9]={2,6,2,0,1,3,5,1,2};
  int maximum=ar[0];
  int sum=0;
  float mean_sum=0;
   for(int i=0;i<9;i++){
    sum+=ar[i];

   }
   mean_sum=(float)sum/9;
   printf("%.2f",mean_sum);
   return 0;

}