#include<stdio.h>
int main(){
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90||ch>=97 && ch<=122)
    printf("%c is an alphabet\n",ch);
    else if(ch>=48 &&ch<=57)
    printf("%c is a digit\n",ch);
    else
    printf("%c is a special character",ch);
    return 0;
}
