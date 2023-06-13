#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of the month: ");
    scanf("%d",&a);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        printf("The number of days in this month is 31\n");
    }
    else if(a==4||a==6||a==9||a==11){
        printf("The number of days in this month is 30\n");
    }
    else{
        printf("The no. of days in this month is 28\n");
    }
}