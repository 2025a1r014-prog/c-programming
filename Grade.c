#include<stdio.h>
int main(){
    int M;
    printf("enter the marks obtained:");
    scanf("%d",&M);
    if(M>=90)
    printf("Your grade is A+");
    else if(M>=80)
    printf("Your grade is A");
    else if(M>=70)
    printf("Your grade is B+");
    else if(M>=60)
    printf("Your grade is B");
    else if(M>=50)
    printf("Your grade is C");
    else
    printf("You failed");
    return 0;
}
