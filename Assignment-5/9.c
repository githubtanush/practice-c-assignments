#include<stdio.h>
int main(){
    float USD,INR;
    printf("Enter the amount in INR");
    scanf("%f",&INR);
    USD=INR/76.23;
    printf("The amount in USD is %.2f\n",USD);
    getchar();
}