#include<stdio.h>
#include<math.h>

double dy_by_dx(double x, double y){
    // can define any dy/dx
    double derivative = x*(pow(y,0.5));
    return derivative;
}

double euler(double x0, double y0, double h, double x){
    while(x0<x){
        y0 = y0 + h*dy_by_dx(x0,y0);
        x0 = x0+h;
    }
    return y0;
}

int main(){
    printf("Let the derivative function be :\n");
    printf("    dy/dx = x*pow(y,0.5)\n");
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
    double y = euler(x0, y0, h, x);
    printf("%lf is the Answer", y);
    return 0;
}
