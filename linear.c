#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n=0, i=0 ;
    float x[100], y[100],xy=0, sx=0,sy=0,sxy=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of x : ");
    for (i = 0; i < n; i++);
    {
        scanf("%d",&x[n]);
    }
    printf("Enter the value of y : ");
    for (i = 0; i < n; i++);
    {
        scanf("%d",&y[n]);
    }
    for ( i = 0; i < n; i++);
    {
        sx= x[i]+x[i+1];
    }
    xy[i] = x[i]*y[i] ;
    printf("%d %d %d", sx,sy,sxy);
    


}
