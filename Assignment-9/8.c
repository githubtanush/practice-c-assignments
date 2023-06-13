#include<stdio.h>
int main(){
    int i=2,n;
    printf("for which number you check it is prime or not");
    scanf("%d",&n);
    while(i<n){//i<=n means we also check n so that it is prime automatically;
    //divide hogya not prime
        if(n%i==0){
            printf("Not Prime for %d\n",i);
        }
        else{
            printf("Prime for %d\n",i);
        }
        i=i+1;
    }
}