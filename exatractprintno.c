#include<stdio.h>
int main(){
    int num;
    printf("enter no.");
    scanf("%d",&num);
    while(num !=0){
    int rem=num%10;
    printf("%d\n",rem);
    num=num/10;
    }
    return 0;
}
