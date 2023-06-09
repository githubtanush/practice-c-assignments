#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the numbers which u want sum:");
    scanf("%d %d",&a,&b);
    if(a<0|b<0){
        printf("a,b must be positiv\n");
    }
    else{
        c=a+b;
        printf("The sum of two numbers is %d\n",c);
    }
    getchar();
}