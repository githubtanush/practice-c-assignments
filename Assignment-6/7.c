#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the sides of a triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("triangle is valid\n");
    }
    else{
        printf("Triangle is not valild\n");
    }
}