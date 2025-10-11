#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    for(int r=1; r<=n;r++){
        for(int c=1;c<=r;c++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
