#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int y,w,d,D,r;
    scanf("%d",&D);
    y=D/365;
    r=D%365;
    w=r/7;
    d=r%7;
    printf("Years: %d\nWeeks: %d\nDays: %d",y,w,d);
    return 0;
}
