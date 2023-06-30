//write a function to calculate factorial of a number(TSRS)
// #include<stdio.h>
// int fact(int n){
//     int f = 1;
//     while(n){
//         f=f*n;
//         n--;
//     }
//     return f;
// }
// int main(){
//     int num,a;
//     printf("Enter the number which  u want to find factorial: ");
//     scanf("%d",&num);
//     a = fact(num);
//     printf("The result is %d\n",a);
//     getchar();
//     return 0;
// }

//write a function to find no. of possible combination can be made out of n items, r selected at a time.(TSRS)
#include<stdio.h>
int fact(int n){
    int f = 1;
    while(n){
        f=f*n;
        n--;
    }
    return f;
}
int combi(int n,int r){
    return fact(n)/fact(n-r)/fact(r);
}
int main(){
    int n,r;
    printf("Total no. of things and how many selected at that time: ");
    scanf("%d %d",&n,&r);
    int number_of_combination;
    number_of_combination=combi(n,r);
    printf("Number of combinations is %d\n",number_of_combination);
    getchar();
    return 0;
}