// without use third variable swapping done
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the value for a and b");
//     scanf("%d %d",&a,&b);
//     printf("before swappind value of a=%d and b=%d\n",a,b);
//     printf("after swapping value of a=%d and b=%d\n",b,a);
//     getchar();   
// }

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value for a and b");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping number is : a=%d,b=%d",a,b);
    getchar();   
}