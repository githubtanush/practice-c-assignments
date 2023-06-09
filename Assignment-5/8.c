#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number which u want:");
    scanf("%d",&a);
    printf("Enter the digit which u want to append: ");
    scanf("%d",&b);
    c=(a*10)+b;
    printf("Here are the number which u make: %d\n",c);
    getchar();
}