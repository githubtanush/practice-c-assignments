//ways to define function
//1.)Takes nothing,returns nothing.(TNRN)
//2.)Takes nothing,returns somenthing.(TNRS)
//3.)Takes something, returns nothing.(TSRN)
//4.)Takes something, returns something.(TSRS)


//TNRN
//when u use any function in inside the function body 1st declare is that add() function is where so we create void add function first before main function
//not made global variable because global variable carry the space through out the programme.


// #include<stdio.h>//header file ka andar function ki declaration like printf,scanf,getchar etc.//library file ke andar function ki defination hoti hai 
// void add();//this is called function declaration.
// int main()//TNRS
// {
//     add();//this is function call.
//     return 0;
// }
// void add()//Empty parenthesis means Takes Nothing.//void-return type
//     {
//         int a,b,c;
//         printf("Enter two numbers");
//         scanf("%d %d",&a,&b);
//         c=a+b;
//         printf("Sum is %d\n",c);
//         //no return keyword means Return nothing.
//         //when any function returns nothing nature then always at function defining time before function name type void
//     }

// //TSRN
// #include<stdio.h>
// void add(int , int );//declaration mein variable ka name likhna jruri nhi hota
// int main(){
//     int x,y;// a or b mein data kaha se aaya x,y mein kaise aaya yeh hma pata krne ki jrurt nhi hai agr ham take something nature k hai
//     printf("Enter two numbers");
//     scanf("%d %d",&x,&y);
//     add(x,y);//call by value - actual arguments
//     return 0;
// }
// //a and b formal arguments/parameters where x and y are actual arguments/parameters
// void add(int a, int b){//add function ko apna kaam krne ka liye jitni values ki jrurt hai bss utna hi variable create krna hai parenthesis ka andar.
// //Takes something nature function.
//             int c;
//             c=a+b;
//             printf("Sum is %d\n",c);
// }


// //TNRS
// #include<stdio.h>
// int add();
// int main(){
//     int s;
//     s=add();//add function replace by return value;
//     printf("Sum is %d\n",s);
//     return 0;
// }
// int add(){
//     int a,b,c;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
//     c=a+b;
//     return c;//return keyword has 2 tasks 1.)return value of c and 2.) it returns control
// }


// //TSRS
// #include<stdio.h>
// int add(int,int);
// int main(){
//     int x,y,s;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&x,&y);
//     s=add(x,y);
//     printf("Sum is %d\n",s);
//     return 0;
// }
// int add(int a,int b){
//     int c;
//     c=a+b;
//     return c;


// #include<stdio.h>
// int main(){
//     int x,i;
//     for(i=1;i<=3;i++){
//         printf("Enter an even number: ");
//         scanf("%d",&x);
//         if(x%2==0){
//             break;
//         }
//         if(i==4){
//             printf("Game over\n");
//         }
//         else{
//             printf("you win\n");
//         }
//     }
//     getchar();
//     return 0;
// }



// //forloop
// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("Enter the no. that how many u print: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             printf("%d ",j*i);
//         }
//         printf("\n");
//     }
// }



//star pattern (Basic skeleton)
// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("enter the no. that how many stars you print: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }

#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the no. that how many stars you print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1)-i;j++){
            printf("*");
        }
        printf("\n");
    }
    getchar();
    return 0;
}