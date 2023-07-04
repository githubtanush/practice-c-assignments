#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    char op;
    printf("Enter the operation which u want to perform: ");
    scanf("%c",&op);
    switch( op ){ 
        case '+':
            printf("%d",a+b);
                    
        case '-':
            printf("%d",a-b);
                    
        case '*':
            printf("%d",a*b);
                    
        case '/':
            printf("%d",a/b);
        case 'e': 
            break;
        default: 
            printf("Enter valid operation.\n");
                
    }
    getchar();
    return 0;
}