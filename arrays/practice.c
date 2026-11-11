#include <stdio.h>

int main()
{
    int i,n;
    int j;
    scanf("%d",&n);
    int ar[n];
    int sorted=1;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n-1;j++){
            if(ar[i]> ar[j]){
                sorted=0;
                break;
            }
        }
    }
    if(sorted==1)
    printf("sorted");
    else
    printf("not sorted");
    return 0;
}



        




