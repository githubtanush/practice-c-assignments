#include<stdio.h>
int main(){
    int row,col,k,r;
    for(row=1;row<=7;row++)
    {
        row<4?r++:r--;
        k=4;
        for(col=1;col<=7;col++)
        {
            if(col>=r && col<=8-r){
                printf("%d ",k);
                
            }
            else{
                if(col<4){
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