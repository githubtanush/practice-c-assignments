#include<stdio.h>
int main(){
    float pie=3.14,r,area;
    printf("Enter the value of radius:");
    scanf("%f",&r);
    if(r<0){
        printf("radius must be positive");
    }
    else{
        area=pie*r*r;
        printf("The sum of two numbers is %.2f\n",area);
    }
    getchar();
}