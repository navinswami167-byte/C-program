#include<stdio.h>
int main ()
{
  int pos = 1,num,sum=0,reminder,reverse=0;
   printf("Enter your number :");
   scanf("%d",&num);
   while (num != 0)

   {
    reminder=num%10;
    reverse=reverse*10+reminder;
    num = num/10;

   }
   
   while(reverse != 0)
   {
    if(pos%2==0)
    {
        reminder = reverse%10;
        sum+=reminder;
       reverse =  reverse/10;
        pos++;
    }
    else
    {
        pos++;
        reverse = reverse/10;
    }
}

printf("%d",sum);
}