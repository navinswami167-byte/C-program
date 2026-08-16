#include<stdio.h>
int main()
{
  float grade,a;
  printf("Enter your score : ");
  scanf("%f",&grade);
  a = grade;
  if (a>=90 && a<=100 )
  { 
    printf("your grade is A");
  }
  else if (a>=80 && a<=89 )
  { 
    printf("your grade is B");
  }
else if (a>=70 && a<=79 )
  { 
    printf("your grade is C");
  }
else if (a>=60 && a<=69 )
  { 
    printf("your grade is D");
  }
else 
{
    printf("Your grade is F");
}









}