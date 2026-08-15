#include<stdio.h>
int main()
{
   int a,b,div,c;
  printf("Enter your first value : ");
  scanf("%d",&a);
  printf("Enter your second value : ");
  scanf("%d",&b);
   if (a>b)
   {
    div = a/b ;
   c =    a -(b*div);

  printf("your reminder is : ");

   printf("%d",c);
     }
    else 
    {div = b/a;
    c =    b -(a*div) ;
    printf("your reminder is : ");
    printf("%d",c);

}
















}