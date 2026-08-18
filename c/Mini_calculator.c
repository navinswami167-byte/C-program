#include<stdio.h>
int main()
{
  float num_1,num_2,result;
  char operation;
  printf("Enter your first number :");
  scanf("%f",&num_1);
  printf("Enter operator(+,-,*,/): ");
  scanf(" %c",&operation);
  printf("Enter your second number :");
  scanf("%f",&num_2);
  if (operation != '+'&& operation != '-' && operation != '*'  && operation != '/')
  {
    printf("Invaild operation ");

  }
else if (operation == '/' && num_2 == 0)
{
    printf("Cannot divide by 0");

}

else 
{
   switch (operation)
   {
    case'+':
    result=num_1+num_2;
    printf("%.2f",result);
    break;
    case'-':
    result=num_1-num_2;
    printf("%.2f",result);
    break;
    case'*':
    result = num_1 * num_2;
    printf("%.2f",result);
    break;
    case'/':
    result = num_1/num_2;
    printf("%.2f",result);
    break;

   }


return 0;





}























}