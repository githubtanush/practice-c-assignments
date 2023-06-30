//write a recursive function to print first N natural number
//recursion-easy to create logic with the help of recursion
//print starting n natural number 
// for solve recursion  problem follow 3 steps
//step-1.)like n=10 1 2 3 .... (n)
//step-2.)make recursive case in which function call itself but original problem se simple version ka liye call krta hai like printN(n-1) 1 2 3 4 ..... (n-1) printf("%d",n);
//step-3.) think about that at at that time where function does not call itself like think about base case and in this base case (n==0)
// #include<stdio.h>
// void printN(int n){//(TSRN)
//     if(n>0){
//         printN(n-1);//not think that how this is call 
//         printf("%d ",n);
//     }
// }
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printN(x);
//     getchar();
//     return 0;
// }


//write a recursive function to print first n natural number in reverse order
//step-1->printNReverse(n) (n)(n-1)(n-2) .... 3 2 1
//step-2->printf("%d",n);
// printNReverse(n-1) (n-1)(n-2) .... 3 2 1
//step-3->base case n==0
// #include<stdio.h>
// void printN(int n){
//     if(n>0){
//         printf("%d ",n);
//         printN(n-1);
//     }

// }
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printN(x);
//     getchar();
// }
//


//write a recursive function to print n natural numbers
//write a recursive function to print first n even natural numbers.
//write a recursive function to print first n odd natural numbers.
//write a recursive function to calculate sum of first n natural numbers.
//write a recursive function to calculate sum of first n odd natural numbers.
//write a recursive function to calculate sum of first n even natural numbers.



//write a recursive function to print first n even natural numbers.
//step-1.)printN(n) = 2 4 6 8 10 ... 2*n
//step-2.)printn(n) = 2 4 6 8 10 ... ((2*n)-2)
//step-3.)n==0
// #include<stdio.h>
// void printN(int n){//(TSRN)
//     if(n>0){
//         printN(n-1);//not think that how this is call 
//         printf("%d ",2*n);
//     }
// }
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printN(x);
//     getchar();
//     return 0;
// }



//write a recursive function to print first n odd natural numbers.
// #include<stdio.h>
// void printN(int n){//(TSRN)
//     if(n>0){
//         printN(n-1);//not think that how this is call 
//         printf("%d ",(2*n-1));
//     }
// }
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printN(x);
//     getchar();
//     return 0;
// }




//write a recursive function to calculate sum of first n natural numbers.
//step-1.)sumN(n) = 1+2+3+ .... +n
//step-2.)n+sumn(n-1) = n+1+2+3+ .... +(n-1)
//step-3.)n==1
// #include<stdio.h>
// int sumN(int n){//(TSRN)
//     if(n==1){
//         return 1;
//     }
//     return n+sumN(n-1);
// }
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printf("%d",sumN(x));
//     getchar();
//     return 0;
// }


//write recursive function to print product of n natural numbers.
//step-1.)sumN(n) = 1*2*3* .... *n
//step-2.)n+sumn(n-1) = n*1*2*3* .... *(n-1)
//step-3.)n==1
// #include<stdio.h>
// int factN(int n){//(TSRN)
//     if(n==1||n==0){
//         return 1;
//     }
//     return n*factN(n-1);
// }
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printf("%d\n",factN(x));
//     getchar();
//     return 0;
// }



