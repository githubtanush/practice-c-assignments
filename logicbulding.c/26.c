//write a recursive function to calculate sum of first n even natural numbers.
// step-1.)sumN(n) = 2+4+6+ ... +n
// step-2.)n+sumn(n-1) = (2*n)+2+4+ ... + (n-1)
// step-3.)n==1
// #include<stdio.h>
// int sumevenN(int n){//(TSRN)
//     if(n==1){
//         return 2;
//     }
//     return (2*n)+sumevenN(n-1);
// }
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printf("%d\n",sumevenN(x));
//     getchar();
//     return 0;
// }


//write a recursive function to print sum of first n odd natural number
// step-1.)sumN(n) = 1+3+5+ ... +n
// step-2.)n+sumn(n-1) = (2*n-1)+1+3+ ... + (n-1)
// step-3.)n==1
// #include<stdio.h>
// int sumoddN(int n){//(TSRN)
//     if(n==1){
//         return 1;
//     }
//     return ((2*n)-1)+sumoddN(n-1);
// }
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printf("%d\n",sumoddN(x));
//     getchar();
//     return 0;
// }


//write a recursive function to calculate sum of squares of first n natural numbers
// step-1.)sumN(n) = 1+3+5+ ... +n
// step-2.)n+sumn(n-1) = (2*n-1)+1+3+ ... + (n-1)
// step-3.)n==1
// #include<stdio.h>
// int sumSquareN(int n){//(TSRS)
//     if(n==1){
//         return 1;
//     }
//     return (n*n)+sumSquareN(n-1);
// }
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printf("%d\n",sumSquareN(x));
//     getchar();
//     return 0;
// }

//write a recursive function to print binary equivalent of a decimal number
