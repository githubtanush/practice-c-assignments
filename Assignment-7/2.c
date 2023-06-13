#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter the number for n which do you want till counting");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    getchar();
}