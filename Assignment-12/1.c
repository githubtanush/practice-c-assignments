//TSRS
#include<stdio.h>
int area(float);
int main(){
    float p,q=3.14,s;
    printf("Enter the value of radius: ");
    scanf("%f",&s);
    p=area(s);
    printf("area is %.2f\n",p);
    return 0;
}
int area(float r){
    float b,pie=3.14;
    b=pie*r*r;
    return b;
}