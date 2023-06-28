//basic programs 
//1.)write a c program to calculate area of circle
// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter a radius: ");
//     scanf("%d",&r);
//     printf("radius of circle is %.2f\n",3.14*r*r);//%f,%lf karne se shi answer aayga expression jo likha  hai ussa kis type ka answer ana vala hai uska format specifier likhna hai 
//     getchar();
// }


//Write a program to calculate average of three numbers.
#include<stdio.h>
int main(){//main()-is the function which call by  operating system function infact without main the programme does not work in c as well as c++ int is the return type of main. and in this return type only we write void or int void means does not return any value but int means it return some value.
//main() ke pehla void int na likha to bhi problem nhi hai .
    int a,b,c;
    float avg;
    printf("Enter Three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    avg = (a+b+c)/3.0;//    int/int=int always- this is rule so remember it .so int /float or float/float or float/int so that answer is float. example - 5/2=2 but 5.0/2,5/2.0, 5.0/2.0 is 2.5
    printf("The average of Three numbers is %.2f\n",avg);
    return 0;// return 0 - means like normal termination of programme.
    //return 1 - means abnormal termination of programme.- means it use some computer resources but there is some problem in it so operating system check this and if possible it will also repair this.
}