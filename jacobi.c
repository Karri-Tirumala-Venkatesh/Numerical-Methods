#include<stdio.h>
int main(){
    float arr[3][4] = {10, 1, -2, 7.74, 1, 12, 3, 39.66, 3, 4, 15, 54.8};
    float x1, y1, z1 = 0;
    float x2, y2, z2 = 0;

    while(100>1){
        x2 = (1/arr[0][0])*(arr[0][3] - y1*arr[0][1] - z1*arr[0][2]);
        y2 = (1/arr[1][1])*(arr[1][3] - x1*arr[1][0] - z1*arr[1][2]);
        z2 = (1/arr[2][2])*(arr[2][3] - x1*arr[2][0] - y1*arr[2][1]);

        if(x2-x1 > 0.0003 || y2-y1 > 0.0003 || z2-z1 > 0.0003){ 
            x1 = x2; 
            y1 = y2; 
            z1 = z2;
        }
        else{
            break;
        }
    }
    printf("%f\n%f\n%f", x2, y2, z2);
    return 0;
}
