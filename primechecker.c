#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,flag=0;
    scanf("%d",&num);
    int i=2;
    while(i<num){
        if(num%i==0){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
