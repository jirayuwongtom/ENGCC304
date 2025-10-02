#include <stdio.h>

int main(){
    float H;
    float W;
    float area;
    printf("H = ");
    scanf("%f" , &H);
    printf("W = ");
    scanf("%f" , &W);
    area = (H * W)  / 2;
    printf("Area = %.1f", area);
    return 0;
}//end main function