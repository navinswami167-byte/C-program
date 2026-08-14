#include<stdio.h>
int main()
{
    float r,pi,vol ;

    pi = 3.14 ;
   
    printf("Enter your radius : ");

   scanf("%f",&r);
    
    vol = (4*pi*r*r*r)/3 ;

    printf("Your volume of sphere : ");
    printf("%f",vol);








}