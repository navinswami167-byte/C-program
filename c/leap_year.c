#include<stdio.h>
int main()
{ 
   int year,a,b,c;
   printf("Enter the year : ");
   scanf("%d",&year);
   a = year % 4;
   b = year % 100;
   c = year % 400;
   if (a != 0)
   {
    printf("This year is not a leap year ");
   }
   else if (a == 0 && b != 0 )
   {
    printf("This year is leap year");
   } 
   else if (a == 0 && b == 0 & c == 0 )
   {
    printf("This year is leap year ");

   }
 else 
     {
        printf("This is not leap year ");
     }











}