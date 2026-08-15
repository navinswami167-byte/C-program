#include<stdio.h>
int main()

{
    float a;
    
    printf("Enter your number : ");
    scanf("%f",&a);
    if (a>0)

    {
        printf("Your number is positive ");

    }
     else if (a==0)
     {printf("Your number is zero ");}

     else
     {printf("Your number is Negative ");}

}