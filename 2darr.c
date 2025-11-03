#include<stdio.h>
int main(){
    int rows,cols;
    printf("enter no. of rows and columns: ");
    scanf("%d %d",&rows,&cols);
    int arr[rows][cols];
    printf("enter element:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe 2d array is:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
