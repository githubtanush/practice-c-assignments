//1.) we teach that dry run is very very important so do and do with max question so that our habbit is developed 
//2.)after taking answer again check solution to optimise it.


//wrtie a program to print greatest number among three numbers
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>=b && a>=c)
//         printf("The greatest number among them is %d\n",a);
//     else if(b>a && b>=c)
//         printf("The greatest number among them is %d\n",b);
//     else
//         printf("The greatest number among them is %d\n",c);
//      getchar();
//      return 0;
// }


//another way
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>=b && a>=c)
//         printf("The greatest number among them is %d\n",a);
//     if(b>a && b>=c)
//         printf("The greatest number among them is %d\n",b);
//     if(c>a && c>b)
//         printf("The greatest number among them is %d\n",c);
//     getchar();
//     return 0;
// }

//another way//break ka estamaal ya to loop mein ya phir switch ki body mein hota bss
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>=b && a>=c)
//         printf("The greatest number among them is %d\n",a);
//     else 
//     {
//         if(b>a && b>=c)
//         printf("The greatest number among them is %d\n",b);
//         else
//         {
//             if(c>=a && c>=b)
//             printf("The greatest number among them is %d\n",c);
//         }
//     }
//     getchar();
//     return 0;
// }


//optimisation 1
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>=b && a>=c)
//         printf("The greatest number among them is %d\n",a);
//     else 
//     {
//         if(b>a && b>=c)
//              printf("The greatest number among them is %d\n",b);
//         else
//              printf("The greatest number among them is %d\n",c);
//     }
//     getchar();
//     return 0;
// }

//optimistation 2
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b)
//     {
//         if(a>c)
//             printf("The greatest number among them is %d\n",a);
//         else 
//             printf("The greatest number among them is %d\n",c);
//     }
//     else
//     {
//         if(b>c)
//             printf("The greatest number among them is %d\n",b);
//         else
//             printf("The greatest number among them is %d\n",c);
//     }
//     getchar();
//     return 0;
// }


//optimistation 3
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b)
//     {
//         (a>c)?printf("The greatest number among them is %d\n",a):printf("The greatest number among them is %d\n",c);
//     }
//     else
//     {
//         (b>c)?printf("The greatest number among them is %d\n",b):printf("The greatest number among them is %d\n",c);
//     }
//     getchar();
//     return 0;
// }


//optimistation 4
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The greatest number among them is %d\n",(a>b)?(a>c)?a:c:(b>c)?b:c);
    getchar();
    return 0;
}