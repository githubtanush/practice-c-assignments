#include<stdio.h>
int main(){
    int year;
    printf("Enter the year which u find that it is leap year or not\n");
    scanf("%d",&year);
    if( (year%4==0 & year%100!=0) | (year%400==0)){
        printf("The enter year is leap year\n");
    }
    else{
        printf("The enter year is not the leap year\n");
    }
}