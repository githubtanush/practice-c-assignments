#include<stdio.h>
int main(){
    float l,b,area_rectangle;
    printf("Enter the value of length and breadth:");
    scanf("%f %f",&l,&b);
    if(l<0|b<0){
        printf("length,breadth must be positive");
    }
    else{
        area_rectangle=l*b;
        printf("The sum of two numbers is %.2f\n",area_rectangle);
    }
    getchar();
}