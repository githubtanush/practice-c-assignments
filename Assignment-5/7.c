#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number which u find last digit:");
    scanf("%d",&a);
    b=(a/10)*10;
    printf("The last digit is %d\n",b);
    getchar();
}