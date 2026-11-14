#include<stdio.h>
int getmax(int x, int y){
    if(x>y){
        printf("%d", x);
    }
    else
        printf("%d", y);
}
int main(){
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    int max=getmax(x,y);
    return 0;
}
