#include<stdio.h>
#define PI 3.14
float calculatearea(float radius){
    float r;
    float area=PI * radius * radius;
    return area;
}
float main(){
    float r,area;
    scanf("%f",&r);
    area=calculatearea(r);
    printf("Area: %.2f", area);
}