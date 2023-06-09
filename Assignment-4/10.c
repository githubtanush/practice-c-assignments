#include<stdio.h>
int main(){
    int base,height,area_of_triangle;
    printf("Enter the value for base and height:");
    scanf("%d %d",&base,&height);
    if(base<0|height<0){
        printf("base,height must be positive");
    }
    else{
        area_of_triangle=(base*height)/2;
        printf("The average of three numbers is %d\n",area_of_triangle);
    }
    getchar();
}