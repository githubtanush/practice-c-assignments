//write a recursive function to calculate sum of digits of a given number
//step-1 -> sumdigits(n)=2+5+6+3
//step-2 -> sumdigits(n/10)=2+5+6 +2563%10 +n%10
//step-3 -> n==0 result 0
// #include<stdio.h>
// int sumdigitsN(int n){
//     if(n==0)
//         return 0;
//     return n%10+sumdigitsN(n/10);
// }
// int main(){
//     int s;
//     s=sumdigitsN(2563);
//     printf("Sum is %d",s);
//     getchar();
// }

//write a recursive function to calculate x^y
//step-1.) -> power(x,y)-x*x*x*x*x 
//step-2.) -> 1.)if(y>0)
//x*power(x,y-1)-x* x*x*x*x
//2.) if(y<0)
// 1/x *power(x,y+1) 1/x*1/x*1/x*1/x
//step-3.) -> y==0 return 1;
#include<stdio.h>
double power(double x,double y){
    if(y==0){
        return 1;
    }
    if(y>0){
        return x*power(x,y-1);
    }
    else{
        return 1/x*power(x,y+1);
    }
}
int main(){
    printf("%d power %d is %.2lf",2,5,power(2,-3));
    getchar();
    return 0;
}