#include<stdio.h>
int main(){
    int i,s=0,n;
    printf("Enter the n till what u want till the counting: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+(2*i-1);
    }
    printf("%d\n",s);
    getchar();
}