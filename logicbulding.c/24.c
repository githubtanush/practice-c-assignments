//write a function to find next prime number of a given number
#include<stdio.h>
int isPrime(int n){
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
void printPrime(int a,int b)
{
    int x;
    for(x=a;x<=b;x++)
        if(isPrime(x))
            printf("%d\n",x);
}
int nextPrime(int n)
{
    while(!isprime(++n));//semicolon because we don't want anything inside while
    return n;
}
 int main(){
    int num;
    printf("Enter the previous prime number");
    scanf("%d",&num);
    nextPrime(num);
    getchar();
    return 0;
}