#include<stdio.h>
int main(){
    float length,breadth,height,volume;
    printf("Enter the numbers for find volume:");
    scanf("%f %f %f",&length,&breadth,&height);
    if(length<0|breadth<0|height<0){
        printf("l,b,h must be positive\n");
    }
    else{
        volume=length*breadth*height;
        printf("The sum of two numbers is %.2f\n",volume);
    }
    getchar();
}