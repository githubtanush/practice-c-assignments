#include<stdio.h>
int main(){
    int row,col,n;
    char ch;
    printf("Enter the number of n that how many times you print the pattern: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        ch='@';
        for(col=1;col<=(n+(n-1));col++){
            if(col>=row && col<=(n*2)-row){
                col<=n?(ch=ch+1):(ch=ch-1);
                printf("%c",ch);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}