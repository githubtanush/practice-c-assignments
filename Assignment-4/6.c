#include<stdio.h>
int main(){
    float a,b,c,average_of_three_numbers;
    printf("Enter the value of a,b and c:");
    scanf("%f %f %f",&a,&b,&c);
    if(a<0|b<0|c<0){
        printf("a,b,c must be positive");
    }
    else{
        average_of_three_numbers=(a+b+c)/3;
        printf("The average of three numbers is %.2f\n",average_of_three_numbers);
    }
    getchar();
}