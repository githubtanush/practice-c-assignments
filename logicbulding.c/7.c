//write a programme to check number is positive or non- positive
//Understand  Question
//Test Cases
//Dry Run
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     if(a>0)
//         printf("Positive\n");
//     else
//         printf("Non-Positive\n");
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     if(5>4)
//         printf("Hello");
//         printf("Welcome");//yeh glt hai esma error aaygi kyuki if ke block mein agr curly bracket nhi lgaaya gya hai to sirf uske baad ki just first line hi if block ke andar maani jaygi or if ke block ke just baad hmesha else hona chahiye vo nhi hota to error aata so yeh glt hua .correct is lower
//     else
//         printf("Bye");
//     getchar();
//     return 0;
// }

//correct programme
// #include<stdio.h>
// int main(){
//     if(5>4)
//         printf("Hello"); 
//     else
//         printf("Bye");
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     if (3!=2);//shi answer is error because if ke jst baad semicolon lga or if block ke just semicolon lga ho matlab if ka block khali hai or agar if ka block khali hai to if ka just baad else aata hai or vohi same reason ho gya or if ke baad semicolon lgana glt ni hai glt hai semicolon ka baad vo block ka just baad else na likhna
//     {
//         printf("Hello");
//     }
//     else{
//         printf("Bye");
//     }
//     getchar();
//     return 0;
// }

//correct way
// #include<stdio.h>
// int main(){
//     if (3!=2);
//     else{
//         printf("Bye");
//     }
//     getchar();
//     return 0;
// }