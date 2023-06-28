//multiple logics
//three step rule-understand,test case,dry run
//write a programme to print first 10 natural number
// #include<stdio.h>
// int main(){
//     int i=1,n;
//     printf("Enter the value for n which u take the natural numbers: ");
//     scanf("%d",&n);
//     while(i<=n){//kbhi bhi i read nhi krenge dry run krta hua this is mistake variable nhi bolna variable ki value bolni hai 
//         printf("%d\n",i);
//         i++;
//     }
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=10,n;
//     printf("Enter the value for n which u take the natural numbers: ");
//     scanf("%d",&n);
//     while(i>=n){//kbhi bhi i read nhi krenge dry run krta hua this is mistake variable nhi bolna variable ki value bolni hai 
//         printf("%d\n",i);
//         i--;
//     }
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=1,n;
//     printf("Enter the value for n which u take the natural numbers: ");
//     scanf("%d",&n);
//     while(i<=n){//kbhi bhi i read nhi krenge dry run krta hua this is mistake variable nhi bolna variable ki value bolni hai 
//         printf("%d\n",(n+1)-i);
//         i++;
//     }
//     getchar();
//     return 0;
// }

//write a programme to print first n odd natural numbers
// #include<stdio.h>
// int main(){
//     int i=1,n;
//     printf("Enter the value for n which u take the natural numbers: ");
//     scanf("%d",&n);
//     while(i<=n){//kbhi bhi i read nhi krenge dry run krta hua this is mistake variable nhi bolna variable ki value bolni hai 
//         printf("%d\n",(2*i-1));
//         i++;
//     }
//     getchar();
//     return 0;
// }

//with for loop 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a Number: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//             printf("%d\n",(2*i-1));
//     }
//     return 0;
// }

//another way
#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=1;i<=(2*n);i++){
        if(i%2!=0)
            printf("%d\n",i);
    }
    return 0;
}