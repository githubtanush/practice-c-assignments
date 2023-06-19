#include<stdio.h>
int main(){
    int row,col,n,count;
    printf("Enter the number of n that how many times you print the pattern: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        count=0;
        for(col=1;col<=(n+(n-1));col++)
        {
            if(col>=(n+1)-row && col<=(n-1)+row)
            {
                col<=n?(count=count+1):(count=count-1);
                printf("%d",count);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}