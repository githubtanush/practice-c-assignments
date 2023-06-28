//wrong method
// #include<stdio.h>
// int main(){
//     int a,b;                 //       a=b;b=a; - wrong logic
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
//     printf("%d %d\n",b,a);
//     getchar();
// }
//screen par dikhana hi sab kuch nhi hai 


//3 ways to think logical 
//1.)understand problem fully.
//2.)test case.
//3.)dry run.



//buri baat yeh nhi hai ki glt logic dimag mein aaya sochta raho bss
//pehla yeh to pta kro problem kaaha hai or vo dry run karke hi pta lgegi


//swapping of values of 2 int type variables
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter two numbers which want u swap: ");
//     scanf("%d %d",&a,&b);
//     printf("Before swapping value of a=%d and b=%d\n",a,b);
//     c=a;
//     a=b;
//     b=c;
//     printf("After swapping value of a=%d and b=%d\n",a,b);
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter two numbers which want u swap: ");
//     scanf("%d %d",&a,&b);
//     printf("Before swapping value of a=%d and b=%d\n",a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("After swapping value of a=%d and b=%d\n",a,b);
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter two numbers which want u swap: ");
//     scanf("%d %d",&a,&b);
//     printf("Before swapping value of a=%d and b=%d\n",a,b);
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     printf("After swapping value of a=%d and b=%d\n",a,b);
//     getchar();
//     return 0;
// }


//bitwise operator behaviour
//XOR= 0^0=0, 0^1=1, 1^0=1, 1^1=0;
//property of xor is when 2 no . of xor is result third number then third number xor with first second will come and third xor with second first come
// binary of 10 is 01010
//binary of 20 is 10100
//then 10^20 = 01010^10100=11110=30 10^20 like is 10+20
//30^20 is =11110^10100=01010 is 10 
//infact 30^10 = 10100= 20
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter two numbers which want u swap: ");
//     scanf("%d %d",&a,&b);
//     printf("Before swapping value of a=%d and b=%d\n",a,b);
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("After swapping value of a=%d and b=%d\n",a,b);
//     getchar();
//     return 0;
// }



//programme in single line 
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter two numbers which want u swap: ");
//     scanf("%d %d",&a,&b);
//     printf("Before swapping value of a=%d and b=%d\n",a,b);
//     b=(a+b)-(a=b);
//     printf("After swapping value of a=%d and b=%d\n",a,b);
//     getchar();
//     return 0;
// }