#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number which u find last digit:");
    scanf("%d",&a);
    b=a/100;
    printf("The first digit is %d\n",b);
    getchar();
}