#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number which u find last digit:");
    scanf("%d",&a);
    b=a%100;
    c=b/10;
    printf("The middle digit is %d\n",c);
    getchar();
}