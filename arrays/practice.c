#include <stdio.h>
int main(){
    int i,j,m,n;
    scanf("%d%d",&m,&n);
    int ar[m][n];
    int *ptr=&ar[0][0];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",(*(ar+i)+j));
        }
    }
    int k;
    scanf("%d",&k);
    int count=0;
    int flag=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(*(*(ar+i)+j)==k){
                count++;
                int flag=1;
            }
        }
    }
    if(count>0){
        printf("present");
    }
    else
    printf("not present");
}


        




