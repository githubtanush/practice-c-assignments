#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three digit number:");
    scanf("%d",&a);
    b=(a%10)*100+a/10;
    printf("After rotation number is: %d\n",b);
    getchar();
}