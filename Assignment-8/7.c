#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the n till what u want till the counting: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i*i);
    }
    getchar();
}