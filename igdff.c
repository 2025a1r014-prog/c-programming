#include<stdio.h>
int main(){
    int num,cube;
    printf("enter the number:");
    scanf("%d",&num);
    if(num%2==0){
        cube=num*num*num;
        printf("cube of is %d",cube);
    }
    return 0;
}
