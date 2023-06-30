// #include<stdio.h>
// int main(){
//     int i,j,n,count;
//     printf("Enter the number till which u want to print the pattern: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         count=1;
//         for(j=1;j<=(2*n-1);j++)
//         {
//             if(j>=(n+1)-i && j<=(n-1)+i)
//             {
//                     printf("%1d",count);//%d ka sath jo bhi 3,4 likhenge matlab utne character ki space to layga hi layga
//                     j<n?count++:count--;
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("Enter the number till which u want to print the pattern: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=(2*n-1);j++)
//         {
//             if(j>=i && j<=(2*n)-i)
//             {
//                 if(i==1)
//                     printf("*");
//                 else
//                     if(j>=i+1 && j<=(2*n-1)-i){
//                         printf(" ");
//                     }
//                     else{
//                         printf("*");
//                     }
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i,j,n,k;
//     printf("Enter the number till which u want to print the pattern: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=(2*n);j++)
//         {
//             k=j;
//             if(j>=1 && j<=2*n)
//             {
//                 if(j>=(n+2)-i && j<=(n-1)+i)
//                     {
//                         printf("*");
//                     }
//                 else
//                     if(j<=n)
//                     {
//                         printf("%d",k);
//                     }
//                     else
//                     {
//                         printf("%d",(2*n+1)-k);
//                     }
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//      getchar();
//     return 0;
// }

// //check mistake morning
// #include<stdio.h>
// int main(){
//     int i,j,n,k;
//     char ch;
//     //printf("Enter the number till which u want to print the pattern: ");
//     //scanf("%d",&n);
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++)
//         {
//             k=j;
//             ch='A';
//             if(j>=1 && j<=9)
//             {
//                 if(j>=7-i && j<=3+i)
//                     {
//                         printf(" ");
//                     }
//                 else
//                     if(j<=5)
//                     {
//                         printf("%c",ch);
//                         ch++;
//                     }
//                     else
//                     {
//                         printf("%c",ch);
//                         ch=ch-1;
//                     }
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//      getchar();
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i,j,lines;
//     char k;
//     for(i=1;i<=4;i++){
//         k='A';
//         for(j=1;j<=7;j++){
//             if(j<=5-i || j>=3+i){
//                 printf("%c",k);
//                 j<4?k++:k--;
//             }
//             else{
//                 printf(" ");
//                 if(j==4)
//                     k--;
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }



 
// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("Enter the number till which u want to print the pattern: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=(2*n-1);j++)
//         {
//             if(j>=i && j<=(2*n)-i)
//             {
//                 if(i==1)
//                 {
//                     if(j>=i+2 && j<=(n-1)+i)
//                         printf("* ");
//                     else{
//                         printf(" ");
//                     }
//                 }
//                 else
//                     if(j>=i+1 && j<=(2*n-1)-i){
//                         printf(" ");
//                     }
//                     else{
//                         printf("*");
//                     }
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }