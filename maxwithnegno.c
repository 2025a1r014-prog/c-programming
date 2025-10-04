#include<stdio.h>
#include<limits.h>
int main(){
    int i,n,num,max=INT_MIN;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter number");
        scanf("%d",&num);
        if(num>max)
        max=num;
    } 
    printf("maximum number is %d",max);
    return 0;
}
