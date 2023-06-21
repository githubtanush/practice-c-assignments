#include<stdio.h>
int main(){
    int i=1,n,fact=1;
    printf("Enter the number which u find factorial: ");
    scanf("%d",&n);
    while(i<=n){
        if(i==0){
            printf("1");
        }
        fact=fact*i;
        i=i+1;
    }
    printf("%d\n",fact);
    return 0;
}