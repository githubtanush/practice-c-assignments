// #include<stdio.h>
// int main(){
//     int a,b;
//     for(a=1;a<=5;a++){
//         for(b=1;b<=2*a-1;b++){
//             printf("%d",b);
//         }
//         printf("\n");
//     }
// }

//write a program to check whether a given no. is prime or not
// #include<stdio.h>
// int main(){
//     int a,n;
//     printf("Enter the number which u want to check that it is prime or not prime: ");
//     scanf("%d",&n);
//     for(a=2;a<n;a++){
//         if(n%a==0){
//             printf("Not prime for %d\n",a);
//         }
//         else{
//             printf("prime for %d\n",a);
//         }
//     }
//      getchar();
//      return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=2,n;
//     printf("Enter the number which u want to check that it is prime or not prime: ");
//     scanf("%d",&n);
//     while(a<n){
//         if(n%a==0){
//             printf("Not prime for %d\n",a);
//         }
//         else{
//             printf("prime for %d\n",a);
//         }
//         a++;
//     }
//     getchar();
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a,n;
//     printf("Enter the number which u want to check that it is prime or not prime: ");
//     scanf("%d",&n);
//     for(a=2;a<n;a++){
//         if(n%a==0){
//             break;
//         }
//         if(a==n)
//             printf("Not prime for %d\n",a);
//         else
//             printf("prime for %d\n",a);
//     }
//     getchar();
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main(){
    int a,n,s;
    printf("Enter the number which u want to check that it is prime or not prime: ");
    scanf("%d",&n);
    s=sqrt(n);
    for(a=2;a<=s;a++){
        if(n%a==0)
            break;
    if(a==s+1)
        printf("Not prime for %d\n",a);
    else
        printf("prime for %d\n",a);
    }
    getchar();
    return 0;
}
