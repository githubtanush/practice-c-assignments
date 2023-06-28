// #include<stdio.h>
// int main(){
//     int i=1;
//     do
//     {
//         printf("%d",i);
//         i++;
//     } while (i=i-2);
// }

//understand importance of mathematics in programming
//write a programme to reverse a given number
//1 test case is 120 return 021 but programme return 21 so what is default
#include<stdio.h>
int main(){
    int x,y=0,count=0,lock=1;//agr upar int ka sath y declare kar dia or nicha bhi int ka sath y declare kar diya to answer jab niklaga vo upar vala y ko ans managa
    printf("Enter the number for which u find reverse: ");
    scanf("%d",&x);
    while(x!=0){
        int b = x%10;
        if(b==0 && lock)//pehla equal to check hokar else mein chla jayga phir lock ke sath and hoga
            count++;
        else
            lock=0;
        y = y*10+b;
        x=x/10;
    }
    while(count--)
        printf("%c",'0');
    printf("%d\n",y);
    getchar();
    return 0;
}