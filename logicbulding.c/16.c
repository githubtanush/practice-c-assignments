// #include<stdio.h>
// int main(){
//     int row,col,lines;
//     //printf("Enter the number that how many lines you print: ");
//     //scanf("%d",&lines);
//     for(row=1;row<=4;row++){
//         for(col=1;col<=7;col++){
//             if(col>=1 && col<=7){
//                 if(col>=6-row && col<=2+row){
//                     printf(" ");
//                 }
//                 else{
//                     printf("*");
//                 }
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
//     getchar();
// }


//by my sir g
// #include<stdio.h>
// int main(){
//     int row,col,lines;
//     char k;
//     printf("Enter the number that how many lines you print: ");
//     scanf("%d",&lines);
//     for(row=1;row<=lines;row++){
//         k='A';
//         for(col=1;col<=(2*lines-1);col++){
//             if(col<=(lines+1)-row || col>=(lines-1)+row)
//             {
//                 printf("%c",k);
//                 col<lines?k++:k--;
//             }
//             else{
//                 printf(" ");
//                 if(col==lines){
//                     k--;
//                 }
//             }
//         }
//         printf("\n");
//     }
//     return 0;
//     getchar();
// }