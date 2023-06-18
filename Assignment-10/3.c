#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter no. of lines:  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        i<=((n+1)/2)?(k=i):(k=(n+1)-i);
        for(j=1;j<=n;j++)
        {
            if(j>=((((n+1)/2)+1)-k) && j<=((((n+1)/2)-1)+k))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}