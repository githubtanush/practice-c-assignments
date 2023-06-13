#include<stdio.h>
int main(){
    int a,b,c,d;
    //ax2+bx+c
    printf("Enter the coefficients for the quadratic equation ax2+bx+c:");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0){
        printf("Roots is real and distinct\n");
    }
    else if(d==0){
        printf("Roots are equal\n");
    }
    else{
        printf("Roots is Imaginary\n");
    }
}