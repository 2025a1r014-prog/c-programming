#include<stdio.h>
int main(){
    int i,factorial=1,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial*=i;
    }
    printf("fact=%d\n",factorial);
    return 0;
}
