//In compititive coding only write that lines which u need not extra line.
//logic 1

// #include<stdio.h>
// int max_of_four(int a,int b,int c,int d)
// {
//     if(a>=b && a>=c && a>=d){
//         return a;
//     }
//     else{
//         if(b>a && b>=c && b>=d){
//             return b;
//         }
//         else{
//             if (c>a && c>b && c>=d){
//                 return c;
//             }
//             else{
//                 return d;
//             }
//         }
//     }
// }
// int main(){
//     int a,b,c,d;
//     // printf("Enter the four numbers in which u check which is greater or smaller: ");
//     scanf("%d %d %d %d",&a,&b,&c,&d);
//     int ans = max_of_four(a,b,c,d);
//     printf("%d\n",ans);
//     getchar();
//     return 0;
// }



// #include<stdio.h>
// int max_of_four(int a,int b,int c,int d)
// {
//     int max;
//     if(a>b)
//     {
//         max = a>c?a>d?a:d:c>d?c:d;
//     }
//     else
//     {
//         max = b>c?b>d?b:d:c>d?c:d;
//     }
//     return max;

// }
// int main(){
//     int a,b,c,d;
//     // printf("Enter the four numbers in which u check which is greater or smaller: ");
//     scanf("%d %d %d %d",&a,&b,&c,&d);
//     int ans = max_of_four(a,b,c,d);
//     printf("%d\n",ans);
//     getchar();
//     return 0;
// }