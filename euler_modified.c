#include<stdio.h>
#include<math.h>

double dy_by_dx(double x, double y){
    // can define any dy/dx
    double derivative = -2*x*(pow(y,2));
    return derivative;
}

double euler_modified(double x0, double y0, double h, double x){
    
    double y1;
    double y2;
    while(x0<x){
        y1 = y0 + h*dy_by_dx(x0,y0);
        while(1){
            y2 = y0 + (h/2)*(dy_by_dx(x0,y0) + dy_by_dx(x0+h,y1));
            if(y2-y1<=0.00003 && y2-y1>=-0.00003){
                break;
            }
            else{
                y1 = y2;
            }
        }
        x0 = x0+h;
        y0 = y2;
    }
    return y0;
}

int main(){
    printf("Let the derivative function be :\n");
    printf("    dy/dx = -2*x*(pow(y,2))\n");
    printf("PLEASE MODIFY THE FUNCTION AS REQUIRED\n");
    double x0, y0;
    printf("Enter the Values x0, y0 :\n");
    scanf("%lf %lf", &x0, &y0);
    double x;
    printf("Enter the Value of x, to find y :\n");
    scanf("%lf", &x);
    double h;
    printf("Enter the Value of h :\n");
    scanf("%lf", &h);
    double y = euler_modified(x0, y0, h, x);
    printf("%lf is the Answer", y);
    return 0;
}
