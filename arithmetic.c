#include<stdio.h>
int main(){
    int x,y,sum,sub,div,pro,rem;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter thr value of y");
    scanf("%d",&y);
    sum=x+y;
    sub=x-y;
    div=x/y;
    pro=x*y;
    rem=x%y;
    printf("addition=%d\nsubtraction=%d\ndivision=%f\nproduct=%d\nremainder=%d",sum,sub,div,pro,rem);
    return 0;
}
