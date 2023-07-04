//write a function to find sum of array elements
// #include<stdio.h>
// int sum(int A[],int size){
//     int s,i;
//     for(i=0,s=0;i<size;i++){
//         s=s+A[i];
//     }
//     return s;
    
// }
// int main(){
//     int a[]={10,20,30,40,50};
//     printf("Sum is %d",sum(a,5));
//     getchar();
//     return 0;
// }

//write a function to find index of greatest value element in an array
//extern is a keyword when use global vaariable after the programme then it is use
// #include<stdio.h>
// int maxValueIndex(int A[],int size){
//     int i,max,maxIndex;
//     max=A[0];
//     maxIndex=0;
//     for(i=1;i<size;i++)
//     {
//         if(A[i]>max){
//             max=A[i];
//             maxIndex=i;
//         }
//     }
//     return maxIndex;
// }
// int main(){
//     int a[]={70,20,60,40,50,100,120,45,79,33};
//     printf("Index is %d",maxValueIndex(a,10));
//     getchar();
//     return 0;
// }

//write  a function to rotate an array elements by 1 position towards right
#include<stdio.h>
void rotate(int A[],int size){
    int i,temp;
    temp=A[size-1];
    for(i=0;i<size-2;i++){
        A[i+1]=A[i];
        A[0]=temp;
    }
}
int main(){
    int i,a;
}