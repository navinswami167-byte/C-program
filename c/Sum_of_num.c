#include<stdio.h>
int main()
{   int sum=0,num,reminder;
    printf("Enter your number :");
    scanf("%d",&num);
    while(num > 0)
    {
    reminder = num%10;
    sum+=reminder;
    num = num/10;
    }
printf("%d",sum);
}