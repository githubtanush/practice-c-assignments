// #include<stdio.h>
// int main(){
//     getchar();//to enter character
//     printf("Hello");//when enter character then it will print the line
//     getchar();//then again window stop till time when we not enter any key
// }
//string- "" double quotes show that this is string in between the printf function when we not apply double quotes so we not understand that it is string but double quotes is not the part of the string 
//escape sequence- backslash ke sath double quotes then vo string ka staring ending point nhi mana jaata phir vo character maana jata as a single like this

#include<stdio.h>
int main(){
    int x = 5, y = 6;
    //printf("\"MySirG\"\n");
    printf("Sum of %d and %d is %d",x,y,x+y);
    getchar();
}