#include<stdio.h>
int main()
{
    int a,b,c ;
    printf("Enter your first number : ");
    scanf("%d",&a);
    printf("Enter your second number : ");
    scanf("%d",&b);
    printf("Enter your third number : ");
    scanf("%d",&c);
    if (a>b>c || a>c>b)
    {printf("Your largest number : %d",a);}
    else if (b>a>c || b>c>a )
    {printf("Your largest number : %d",b);}
    else
    {printf("your largest number : %d",c);}

}