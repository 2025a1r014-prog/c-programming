//program to print distance
#include<stdio.h>
#include<math.h>
int main(){
   double x1,x2,y1,y2,distance;
   printf("value of x1");
   scanf("%lf",&x1);
   printf("value of x2");
   scanf("%lf",&x2);
   printf("value of y1");
   scanf("%lf",&y1);
   printf("value of y2");
   scanf("%lf",&y2);
   distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
   printf("d = %lf",distance);
   return 0;
}
