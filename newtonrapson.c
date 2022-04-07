#include<stdio.h>
#include<curses.h>
#include<math.h>
#include<stdlib.h>
int main(){
    double a,sqrtnum=0,x,y,fx,fdx;
    printf("Find the sq rt by NRM of : ") ;
    scanf("%lf", &a);
    printf("Enter the lower range: ");
    scanf("%lf",&x);
    printf("Enter the higher range: ");
    scanf("%lf",&y);
    
    
    printf("Find the square root of %lf to 5 place correct with minum error\n",a);
   
    // for(x>0; x>sqrtnum>y; sqrtnum=x){
    //     sqrtnum= x-(fx/fdx);
    //     printf("squreroot is %.5lf in this ittration\n",sqrtnum);
    //     if (x<sqrtnum<y)
    //     {
    //         printf("%.5lf is squre root",sqrtnum);
    //     }
    //     else{
    //         printf("Some thing is wrong with code");
    //         break;
    //     }
    // for ( i = 0; i < count; i++)
    // {
    //     
    //     
          
    // }
do {
    
    fx = (x*x)-a;
    fdx = 2*x;
    printf("%.5lf is function f(x) and  %.5lf is d f(x)\n",fx, fdx);
    sqrtnum = x - (fx / fdx);
    x = sqrtnum ;
    printf("%.5lf is squareroot of %.0lf\n",sqrtnum,a);
   
}
while (fx != 0);

   
    return 0;
}