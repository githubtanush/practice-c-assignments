//write a program in which takes once character from keyboard using getch() function and display its ASCII code. 
#include<stdio.h>
int main(){
    char c;
    printf("Enter a character ");
    c = getchar();//getch function jo character leta hai vo hi vaapis de deta hai
    printf("\n %c is %d\n",c,c);//c ka format specifier badal do to uska ascii code print ho jata
    getchar();
}