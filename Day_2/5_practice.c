#include<stdio.h>
int main(){
    int feet;
    float mm;
    printf("Enter feet to convert in millimeter : ");
    scanf("%d",&feet);
    mm=feet*304.8;
    printf("After converting the feet into millimeter : %.3f \n",mm);
    return 0;
}