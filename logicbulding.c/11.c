//program to print english alphabet in lowercase
// #include<stdio.h>
// int main(){
//     char c;
//     for(c='a';c<='z';c++){
//         printf("%c ",c);
//     }
//     getchar();
//     return 0;
// }


//programme to print the calculate of sum of  first N natural number
// #include<stdio.h>
// int main(){
//     int i,n;
//     int s=0;
//     printf("Enter the natural number till u want calculate sum: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         s=s+i;
//     }
//     printf("The sum of the natural number till n is %d\n",s);
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,i=1;
//     int s=0;
//     printf("Enter the natural number till u want calculate sum: ");
//     scanf("%d",&n);
//     while(i<=n){
//         s=s+i;
//         i++;
//     }
//     printf("The sum of the natural number till n is %d\n",s);
//     getchar();
//     return 0;
// }

//programme to print the calculate of sum of  first N natural number
// #include<stdio.h>
// int main(){
//     int i,n;
//     int s=0;
//     printf("Enter the natural number till u want calculate sum: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){//if u don't write any statement in for loop then enter in for parenthesis
//         s=s+i;
//         printf("%d ",s);
//     }
//     printf("\nThe sum of the natural number till n is %d\n",s);
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the natural number till u want calculate sum: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){//if u don't write any statement in for loop then enter in for parenthesis
//         printf("%d ",i*i);
//     }
//     getchar();
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=i+1;j<=4;j++){
//             printf("%d",2*j-1);
//         }
//     printf("\n");
//     }
//     getchar();
//     return 0;
// }


#include<stdio.h>
int main(){
    int i=5,j=1;
    while(i){//i ki value 5 non-zero number so evaluate
        j=i*j;
        i--;
    }
    printf("%d %d",i,j);
    getchar();
}