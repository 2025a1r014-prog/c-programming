//progrsm to display tje elements of an array
#include<stdio.h>
int main(){
    int size;
    printf("Array size");
    scanf("%d",&size);
    int stu[size];
    //how we can read elements of an array from user
    printf("Enter roll no. of %d students",size);
    for(int i=0;i<size;i++){
        scanf("%d",&stu[i]);
    }
    //how we can display all elements of an array
    for(int i=0;i<size;i++){
        printf("%d\t",stu[i]);
    }
    return 0;
}
