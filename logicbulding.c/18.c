// //functions in c language
// //write a function to calculate sum of two number(TNRN)
// #include<stdio.h>
// void sum(){//Takes nothing so don't write anything in bracket
//     int a,b,c;
//     printf("Enter two numbers for which u want print sum: ");
//     scanf("%d %d",&a,&b);
//     c=a+b;
//     printf("The sum of two numbers is %d",c);
// }
// int main(){//koi farak nhi padta main kaha likha function ka execution main se hi shuru hota or main() likha bina koi bhi function execute nhi hota
//     sum();//function call 
//     getchar();
//     return 0;
// }

// //sum of two numbers(TSRN)
// #include<stdio.h>
// void sum(int a,int b){//Takes something so write how many values you need in bracker in bracket or bracket ka andar jo hai voh formal arguments hota hai 
//     int c=a+b;
//     printf("The sum of two numbers is %d",c);
// }
// int main(){
//     int x,y;
//     printf("Enter the number for which u find sum ");
//     scanf("%d %d",&x,&y);
//     sum(x,y);//function call //actual arguments in this bracket
//     getchar();
//     return 0;
// }

// //sum of two numbers(TNRS)
// #include<stdio.h>
// int sum(){//Takes nothing so don't write anything in bracket return something means instead of void write int 
//     int a,b,c;
//     printf("Enter two numbers for which u want print sum: ");
//     scanf("%d %d",&a,&b);
//     c=a+b;
//     return c;
// }  
// int main(){
//     int s;
//     s=sum();//function call //actual arguments in this bracket s mein store krna pdega kyuki vaah se value return ho rhi hai print nhi or return statement ki help se ham 1 value return kr skte hai saari nhi or phir esko print krenge
//     printf("Sum is %d\n",s);
//     getchar();
//     return 0;
// }


// // //sum of two numbers(TSRS)
// #include<stdio.h>
// int sum(int a,int b){//Takes something so write how many values you need in bracker in bracket or bracket ka andar jo hai voh formal arguments hota hai 
//     int c=a+b;
//    return c;
// }
// int main(){
//     int x,y,s;//Actual arguments
//     printf("Enter the number for which u find sum ");
//     scanf("%d %d",&x,&y);
//     s=sum(x,y);//function call //actual arguments in this bracket
//     printf("Sum is %d\n",s);
//     getchar();
//     return 0;
// }


//when we return value more than 1 variable then how we can do it ek baat to pkka hai return keyword ki madad se bss ek hi value return kra  skte hai eska ek trika hai pointer or structure pointer pointer return krata more than 1 variable ya dusra trika hai grouping krke return krwa do.