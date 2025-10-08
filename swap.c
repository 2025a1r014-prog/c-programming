//program to swap two no,
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int num,rev=0;
    printf("enter no.");
    scanf("%d",&num);
    if(num>=0 && num<=9)
    printf("%d",num);
    else{
        while(num!=0){
            int rem =num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        printf("%d",rev);
    }
    return 0;
}
