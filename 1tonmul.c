#include<stdio.h>
int main(){
    int i,mul=1,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        mul*=i;
    }
    printf("mul=%d\n",mul);
    return 0;
}
