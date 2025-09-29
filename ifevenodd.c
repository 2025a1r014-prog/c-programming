#include<stdio.h>
int main(){
    int num;
    printf("enter a number :");
    scanf("%i",&num);
    if(num%2==0)
        printf("the number is even");
    else
        printf("number is odd");
    return 0;
}
