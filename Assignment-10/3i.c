#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter the number of n that how many times you print the pattern: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(col>=(n+1)-row && col<=n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}