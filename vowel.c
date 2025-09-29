#include<stdio.h>
int main(){
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if( ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("entered character is  a vowel");
    else
    printf("entered character is a constant");
}
