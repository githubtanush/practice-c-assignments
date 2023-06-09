#include<stdio.h>
int main(){
    float a,square;
    printf("Enter the value of a for which u want square:");
    scanf("%f",&a);
    square=a*a;
    printf("The square of the number is %.2f\n",square);
    getchar();
}