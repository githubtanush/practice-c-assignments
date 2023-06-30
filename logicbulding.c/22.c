//competitive question
#include<stdio.h>
int main(){
    int row,col,k,r,n;
    scanf("%d",&n);
    for(row=1,r=0;row<=(2*n-1);row++)
    {
        row<=n?r++:r--;
        k=n;
        for(col=1;col<=(2*n-1);col++)
        {
            if(col>=r && col<=(2*n)-r){
                printf("%d ",k);
                
            }
            else{
                if(col<n){
                    printf("%d ",k);
                    k--;
                }
                else{
                    k++;
                    printf("%d ",k);
                }
            }
        }
        printf("\n");
    }
    getchar();
    return 0;
}