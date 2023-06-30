//write a programme to takes month number as input from user, and display number of days in that month.
// #include<stdio.h>
// int main(){
//     int month;
//     printf("Enter month number: ");
//     scanf("%d",&month); 
//     switch(month)
//     {
//         case 1:
//         printf("Month January\nDays 31\n");
//         break;
//         case 2:
//         printf("Month February\nDays 28\n");
//         break;
//         case 3:
//         printf("Month March\nDays 31\n");
//         break;
//         case 4:
//         printf("Month April\nDays 30\n");
//         break;
//         case 5:
//         printf("Month May\nDays 31\n");
//         break;
//         case 6:
//         printf("Month June\nDays 30\n");
//         break;
//         case 7:
//         printf("Month July\nDays 31\n");
//         break;
//         case 8:
//         printf("Month August\nDays 31\n");
//         break;
//         case 9:
//         printf("Month September\nDays 30\n");
//         break;
//         case 10:
//         printf("Month October\nDays 31\n");
//         break;
//         case 11:
//         printf("Month November\nDays 30\n");
//         break;
//         case 12:
//         printf("Month December\nDays 31\n");
//         break;
//         default:
//         printf("Invalid Month Number\n");
//     }
//     getchar();
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int month;
//     printf("Enter month number: ");
//     scanf("%d",&month); 
//     switch(month)
//     {
//         case 1://case 1,3,5,7,8,10,12 is wrong way
//         case 3://case 1;3;5;7;8;10;12 is also wrong way
//         case 5://case 1||3||5||7||8||10||12 is also wrong way because it takes one as true value so print is always 31 at 1 and on rest it is 0
//         case 7: 
//         case 8:
//         case 10:
//         case 12:
//         printf("Days 31\n");
//         break;
//         case 2:
//         printf("Month February\nDays 28\n");
//         break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//         printf("Month April\nDays 30\n");
//         break;
//         default:
//         printf("Invalid Month Number\n");
//     }
//     getchar();
//     return 0;
// }


//write a programme to take marks obtained in examination(out of 100) from user and display the appropriate grade;
#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    switch(marks)
    {
        case 91 ... 100://3 dots denote the range but it is defined only when  when no. are in continous order and also there is space between dots and number case mein jo constant likhange ek vo repeat nhi hona chahiye or dusra point mein nhi hona chahiye  matlab real constant nhi hona chahiye
        printf("Grade A\n");
        break;
        case  81 ... 90:
        printf("Grade B\n");
        break;
        case  71 ... 80:
        printf("Grade C\n");
        break;
        case  61 ... 70:
        printf("Grade D\n");
        break;
        case  51 ... 60:
        printf("Grade E\n");
        break;
        case  0 ... 50:
        printf("Grade F\n");
        break;
        default:
        printf("Enter valid marks\n");
    }
    getchar();
    return 0;
}