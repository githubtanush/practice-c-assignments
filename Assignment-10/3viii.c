#include<stdio.h>
int main(){
    int row,col,n,integer;
    printf("Enter the number of n that how many times you print the pattern: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        integer=(n+1)-row;
        for(col=1;col<=n;col++){
            if(col>=1 && col<=(n+1)-row){
                printf("%d",integer);
                integer=integer-1;   
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}