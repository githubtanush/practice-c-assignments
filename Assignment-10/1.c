//print n terms of fibonnaci series
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number till which u find the fibonnaci sequence: ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    printf("%d %d ",a,b);
    for(int i=1; i<=n; i++){
        int nextnumber=a+b;
        printf("%d ",nextnumber);
        a=b;
        b=nextnumber;
    }
}