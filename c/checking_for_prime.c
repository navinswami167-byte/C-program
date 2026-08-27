#include<stdio.h>
int main()
{
   int num,i,result=1;
   printf("Enter your number:");
   scanf("%d",&num);
   if(num<=1){
    result=0;
   }
else
  {
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            result=0;
            break;
        }
    }
  }

if(result)
{
    printf("%d is prime number",num);
}
else
{
    printf("%d is not prime number",num);
}



































}