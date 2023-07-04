#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    char op;
    printf("Enter the operation which u want to perform: ");
    scanf("%c",&op);
    while(op != 'e'){
    switch(op){
        case '+':printf("%d + %d is %d",a,b,a+b);
                    break;
        case '-':printf("%d - %d is %d",a,b,a-b);
                    break;
        case '*':printf("%d * %d is %d",a,b,a*b);
                    break;
        case '/':printf("%d / %d is %d",a,b,a/b);
        case 'e': break;
        default: printf("Enter valid operation.\n");
                break;
    }
    }
    getchar();
    return 0;
}