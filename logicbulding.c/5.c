//write a programme to print only last digit of a number.
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    x=x%10;
    printf("The last digit of a given number is %d\n",x);
    getchar();
    return 0;
}