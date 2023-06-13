#include<stdio.h>
int main(){
    char ch;
    printf("Enter the thing for which u find it is alphabet digit or special\n");
    scanf("%c",&ch);
    if(ch>='A' & ch<='Z'){
        printf("The thing is alphabet Uppercase\n");
    }
    else if (ch>='a' & ch<='z'){
        printf("The thing is alphabet lowercase\n");
    }
    else if(ch>='0' & ch<='9'){
        printf("The thing is digit\n");
    }
    else{
        printf("The thing is special character\n");
    }
}