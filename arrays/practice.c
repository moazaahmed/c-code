#include <stdio.h>
int main()
{
    int i,n,j;
    int start;
    int end;
    printf("enter range: ");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++){
        int prime=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
            if(prime==1){
                printf("%d is prime\n", i);
            }
            else
            printf("%d is not prime\n", i);
    }
    return 0;
}



        




