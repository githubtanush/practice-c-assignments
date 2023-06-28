//write a programme to check number is even or odd
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number which u want to check it is odd or not: ");
//     scanf("%d",&a);
//     if(a%2==0)// or if(a%2)
//         printf("Number is even\n");
//     else//else ke andar kbhi condition nhi likhta
//         printf("Number is odd\n");
//     getchar();
//     return 0;
// }

//without using % operator
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the no. which u want to check if it is even or odd: ");
//     scanf("%d",&x);
//     if(x/2*2==x)
//         printf("Number is even\n");
//     else
//     printf("Number is odd\n");
//     getchar();
//     return 0;
// }

//In the sense of bitwise operator
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number for which u want to check if it is even or not: ");
    scanf("%d",&a);//binary of 0 is 0, 4 is 100, 20 is 00010100, 54 is 00110110 any even no. least significant bit is always 0 and in odd no. least significant bit is always 1 so when we and(&) this with one if no. is even then it will and and become always 0 and if and with odd no. is odd then it will and and always  become 1 then it is odd always.
    if(a&1){
        printf("Number is odd\n");
    }
    else{
        printf("Number is even\n");
    }
    getchar();
    return 0;
}

//add two number without using plus operator is a-(-b)