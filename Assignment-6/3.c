#include<stdio.h>
int main(){
    int a;
    printf("Enter the number which u check is positive, negative or zero\n");
    scanf("%d",&a);
    if(a>0){
        printf("The given no. is positive.\n");
    }
    else if(a==0){
        printf("The given no. is zero.\n");
    }
    else{
        printf("The given no. is negative\n");
    }
}