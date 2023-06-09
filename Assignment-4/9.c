#include<stdio.h>
int main(){
    float selling_price,cost_price,profit,profit_percentage;
    printf("Enter the value of selling_price,cost_price:");
    scanf("%f %f",&selling_price,&cost_price);
    if(cost_price<0|selling_price<0){
        printf("c.p,s.p must be positive");
    }
    else{
        profit=selling_price-cost_price;
        printf("profit is: %.1f",profit);
        profit_percentage=(profit/cost_price)*100;
        printf("The Profit_percentage is %.2f%%\n",profit_percentage);
    }
    getchar();
}