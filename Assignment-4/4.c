#include<stdio.h>
int main(){
    int time;
    float principle,rate,simple_interest;
    printf("Enter the numbers for find simple interest:");
    scanf("%d %f %f",&time,&principle,&rate);
    if(principle<0 | rate<0 | time<0)
    {
        printf("p,r,t must be positive\n");
    }
    else{
        simple_interest=(time*principle*rate)/100;
        printf("The simple_interest is %.2f\n",simple_interest);
    }
    getchar();
}