#include <stdio.h>
int main()
{
    int i,n;
    printf("enter number of element: ");
    scanf("%d",&n);
    int ar[n];
    printf("the array is: ");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int j,m;
    int temp;
    printf("enter the m'th largest number:");
    scanf("%d",&m);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(ar[j]>ar[j+1]){
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    printf("%d -th largest number is %d", m, ar[n-m]);
    return 0;
}