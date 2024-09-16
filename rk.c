#include<stdio.h>
#include<math.h>

double dy_by_dx(double x, double y){
    // can define any dy/dx
    double derivative = ((exp(-2*x))*(pow(x,3)))-(2*y);
    return derivative;
}

double R_K_Method(double x0, double y0, double h, double x){
    while(1){
        double k1 = h*dy_by_dx(x0, y0);
        double k2 = h*dy_by_dx(x0+(h/2), y0+(k1/2));
        double k3 = h*dy_by_dx(x0+(h/2), y0+(k2/2));
        double k4 = h*dy_by_dx(x0+h, y0+k3);
        double k = (k1+(2*k2)+(2*k3)+k4)/6;
        x0 = x0 + h;
        y0 = y0 + k;
        if(x0==x){
            break;
        }
    }
    return y0;
}

int main(){
    printf("Let the derivative function be :\n");
    printf("    dy/dx = ((exp(-2*x))*(pow(x,3)))-(2*y)\n");
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
    double y = R_K_Method(x0, y0, h, x);
    printf("%lf is the Answer", y);
    return 0;
}
