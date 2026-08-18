#include<stdio.h>
int main()
{
    float pur_amount,discount;
    printf("Enter your purchase amount: ");
    scanf("%f",&pur_amount);
    if (pur_amount>=0 && pur_amount<=1000)
    {
        printf("No discount\nAmount to pay %f",pur_amount );
    }
   else if (pur_amount>1000 && pur_amount<=5000)
{
    printf("You get 10 percentage discount\n ");
    discount = 0.1 * pur_amount;
    pur_amount-=discount;
    printf("Amount to pay : %f",pur_amount);

}
else if (pur_amount>5000 && pur_amount<=10000)
{
    printf("You get 20 percentage discount\n");
    discount = 0.2 * pur_amount;
    pur_amount-=discount;
    printf("Amount to pay : %f",pur_amount);
}
else if(pur_amount>10000)
{
    printf("You get 25 percentage discount\n");
    discount = 0.25 * pur_amount;
    pur_amount-=discount;
    printf("Amount to pay : %f",pur_amount);
}

else 
{
    printf("purchase amount should be grater than 0");
}


return 0;




}
