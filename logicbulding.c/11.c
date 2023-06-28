//program to print english alphabet in lowercase
// #include<stdio.h>
// int main(){
//     char c;
//     for(c='a';c<='z';c++){
//         printf("%c ",c);
//     }
//     getchar();
//     return 0;
// }


//programme to print the calculate of sum of  first N natural number
// #include<stdio.h>
// int main(){
//     int i,n;
//     int s=0;
//     printf("Enter the natural number till u want calculate sum: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         s=s+i;
//     }
//     printf("The sum of the natural number till n is %d\n",s);
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,i=1;
//     int s=0;
//     printf("Enter the natural number till u want calculate sum: ");
//     scanf("%d",&n);
//     while(i<=n){
//         s=s+i;
//         i++;
//     }
//     printf("The sum of the natural number till n is %d\n",s);
//     getchar();
//     return 0;
// }

//programme to print the calculate of sum of  first N natural number
// #include<stdio.h>
// int main(){
//     int i,n;
//     int s=0;
//     printf("Enter the natural number till u want calculate sum: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){//if u don't write any statement in for loop then enter in for parenthesis
//         s=s+i;
//         printf("%d ",s);
//     }
//     printf("\nThe sum of the natural number till n is %d\n",s);
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the natural number till u want calculate sum: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){//if u don't write any statement in for loop then enter in for parenthesis
//         printf("%d ",i*i);
//     }
//     getchar();
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=i+1;j<=4;j++){
//             printf("%d",2*j-1);
//         }
//     printf("\n");
//     }
//     getchar();
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i=5,j=1;
//     while(i){//i ki value 5 non-zero number so evaluate
//         j=i*j;
//         i--;
//     }
//     printf("%d %d",i,j);
//     getchar();
// }


// #include<stdio.h>
// int main(){
//     int x=1,y=10;
//     while(x<y){
//         x++;
//         y--;
//     }
//     printf("%d %d",x,y);
//     getchar();
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i=2,x=36;
//     while(x>1)
//     {
//         while(x%i==0){
//             x/=i;
//             printf("%d ",i);
//         }
//         i++;//i++andar vala loop mein nhi hai yeh yaad rkho
//     }
// }


// #include<stdio.h>
// int main(){
//     int x;
//     x=1,2,3;//yaah par ab variable declare nhi kar rah jo error aaygi ab uske niche hai to ab jo comma se pehla hai like 1 vo x mein store hojayga
//     //x=(1,2,3);//variable declaration mein agr comma ka baad kuch likhna hai to vo hoga variable ka naam jeisa 1 ka baad comma lgaaya to uske baad jo bhi likha jayga vo hoga variable ka name  to 2 kya variable ka name ho skta hai agr yaah ham parenthesis laga kar krenge to ab yeh error nhi hai or agr ham asa krenge to last vali value hi us pura expression ka result bnti hai 
//     while(x){
//         printf("%d\n",x);
//         x--;
//     }
// }