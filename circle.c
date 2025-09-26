#include<stdio.h>
int main(){
    float r,area,perimeter;
    printf("enter value of radius");
    scanf("%f",&r);
    area=3.14*r*r;
    perimeter=2*3.14*r;
    printf("area of circle=%f\nperimeter of circle=%f",area,perimeter);
    return 0;
}
