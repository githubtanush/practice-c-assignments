//write a function to calculate to area of circle(TSRS)
// #include<stdio.h>
// float area_of_circle(int r){//float lena return type
//     return 3.14 * r * r;
// }
// int main(){
//     int radius;
//     printf("Enter the value of radius for which u find area: ");
//     scanf("%d",&radius);
//     float f = area_of_circle(radius);
//     printf("Area of circle is %.2f\n",f);
//     getchar();
//     return 0;
// }

//function to check whether a given number is even or odd function will return 1 if number is even and return 0 if number is odd.(TSRS)
#include<stdio.h>
int isEven(int n){
    // if(n%2==0){
    //     return 1;
    // }
    // return 0;//when we remove else keyword then this function is correct?- 100%correct no need to write else if likh rah  ho to else hona jruri nhi hai but else likh rah ho to if likhna jruri hai
    //return n%2==0;//relational operator ka answer hi 1 ya 0 aata hai.
    //another way
    return !(n%2);
}
int main(){
    int num;
    printf("Enter the no. which u want to check it is odd or even: ");
    scanf("%d",&num);
    int m=isEven(num);
    printf("The no. is %d\n",m);
    getchar();
    return 0;
}