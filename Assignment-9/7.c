#include<stdio.h>
int main(){
    int n;
    int count;
    printf("Enter the number for which u count digit: ");
    scanf("%s",&n);
    count=0;
    while(n!=0){
            int digit=n%10;
            count=count+1;
            n=n/10;
    }
    printf("%d\n",count);
    return 0;
}
//only fault in code is back 0 does not count but after zeroes they can count how solve this take dimag
