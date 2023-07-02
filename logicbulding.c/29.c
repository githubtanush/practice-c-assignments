//arrays
#include<stdio.h>
int main(){
    int a[100],i,n,sum=0;//jab array ko declare krte hai or square bracket mein likhta hai to voh index nhi hai
    float avg;
    printf("Enter n numbers: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++){
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("%d\n",sum);
    printf("%.2f\n",avg);
    printf("\n");
    return 0;
}
//without initialize array all value contain garbage value
//when enter number greater than the index of the array then it shows error
//when array declare with less value then rest value contain 0
//you can leave bracket empty when declare array
//int i,a[5]; for(i=0;i<=9;i++) scanf("%d",&a[i]);this for loop error does not identified