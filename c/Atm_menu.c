#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    printf("Enter your balance : ");
    scanf("%f",&a);
    printf("what you like to do\n 1 Check balance\n 2 deposit\n 3 Withdraw\n 4 Exit\n Enetr  Your option:  ");
    scanf("%f",&b);

    if(b == 1)
   {
    printf("%f",a);
    printf("\n Thanks for using our atm");
   }
   else if (b == 2)
   {
     printf("Enter your amount to deposit : ");
     scanf("%f",&c);
     d = a + c ;
     printf("Your current balance : %f",d);
    printf("\n Thanks for using our atm");
   }

 else if ( b == 3 )
 {
    printf("Enter your amount to Withdrawal ");
   scanf("%f",&e);
   if (e<=a)
   {
    f = a - e ;
  printf("Your current balance : %f",f);
  printf("\n Thanks your using our Atm ");}
  else if (a<e)
{
    printf("Not sufficient balance");
    printf("\n Your current balance : %f",a);
    printf("\nThanks your using our Atm ");
}

 }
  else if (b == 4)
  {
    printf("Thanks your using our Atm ");
  }
else 
{
    printf("Enter out of 4 number ");
}

    return 0;

}