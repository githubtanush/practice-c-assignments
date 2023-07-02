//fibonnaci sequence - 0 1 1 2 3 5 8 13 21 34 55
//step-1.) -> fib(n) nth term
//step-2.) -> fib(n-1)+fib(n-2)  (n-1)th+(n-2)th
//step-3.) -> n==1 return 0 or n==2  return 1
#include<stdio.h>
int F[100];//dynamic programming
int fib(int n){
    if(F[n-1]!=-1){
        return F[n-1];
    }
    if(n==1 || n==2){
       F[n-1]=n-1;
    }
    else{
        F[n-1]=fib(n-1)+fib(n-2);
    }
    return F[n-1];
}
int main(){
    int i;
    for(i=0;i<=99;i++){
        F[i]=-1;
    }
    printf("%d\n",fib(40));
    getchar();
    return 0;
}