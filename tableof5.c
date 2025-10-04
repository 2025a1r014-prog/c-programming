#include<stdio.h>
#include<limits.h>
int main(){
    int i,n,num=5;
    printf("enter the value of n");
    scanf("%i",&n);
    for(i=1;i<=n;i++){
        
        printf("%dx%d=%d\n",num,i,num*i);
    }
    return 0;
}
