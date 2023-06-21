#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0;
    printf("Enter the number which u find the inverse: ");
    scanf("%d",&n);
    while(n!=0){
        int digit=n%10;
        count=(count*10) + digit;
        
        n=n/10;
    }
    printf("%d\n",count);
    return 0;
}