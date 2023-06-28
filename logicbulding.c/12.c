// #include<stdio.h>
// int main(){
//     int i,n,s=0;
//     printf("Enter the number till which u want to print sum of odd natural number: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         s=s+(2*i-1);
//         printf("%d ",s);
//     }
//     printf("\nsum of odd natural number is : %d\n",s);
//     getchar();
//     return 0;
// }


//find output
// #include<stdio.h>
// int main(){
//     int x = 128;  
//     for(;x;x>>=1)//128>>=1,binary of 128 is 10000000 and right shift means divide by 2
//         printf("%d ",x);
// }


//find output
// #include<stdio.h>
// int main(){
//     int x = 1,a,s;
//     for(s=0,a=5;a;x<<=1,a--){//for mein multiple initialization kar skte hai comma se separate krte hua x=0000000001 left shift means x ki value 2ki power mein bdti jaati hai x<<=1 means x=x<<1
//         s=s+x;
//         printf("%d ",s);
//     }
    
//     printf("\n%d \n",x);
// }