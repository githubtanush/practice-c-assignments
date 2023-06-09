#include<stdio.h>
int main(){
    int a;
    printf("Enter the number which u check is divisible by 3 and divisible by 2\n");
    scanf("%d",&a);
    if(a%3==0 | a%7==0){
        printf("The given no. is divisible by 3 or 7\n");
    }
    else{
        printf("The given no. is not divisible by 3 or 7\n");
    }
}