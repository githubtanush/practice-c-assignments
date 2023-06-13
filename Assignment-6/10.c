#include<stdio.h>
int main(){
    float physics,chemistry,Biology,Mathematics,Computer,percentage;
    printf("Enter the marks for physics: ");
    scanf("%f",&physics);
    printf("Enter the marks for chemistry: ");
    scanf("%f",&chemistry);
    printf("Enter the marks for Biology: ");
    scanf("%f",&Biology);
    printf("Enter the marks for Mathematics: ");
    scanf("%f",&Mathematics);
    printf("Enter the marks for Computer: ");
    scanf("%f",&Computer);
    percentage=(physics+chemistry+Biology+Mathematics+Computer)/5.0;
    printf("The percentage is %.2f%%\n",percentage);
    if(percentage>=90 & percentage<=100){
        printf("Grade A\n");
    }
    else if(percentage>=80 & percentage<90){
        printf("Grade B\n");
    }
    else if(percentage>=70 & percentage<80){
        printf("Grade C\n");
    }
    else if(percentage>=60 & percentage<70){
        printf("Grade D\n");
    }
    else if(percentage>=40 & percentage<60){
        printf("Grade E\n");
    }
    else{
        printf("Grade F\n");
    }
}