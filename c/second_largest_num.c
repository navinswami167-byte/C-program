#include<stdio.h>
int main()
{  int n,largest,second_largest;
    printf("Enter your nummber of integer :");
    scanf("%d",&n);
    printf("Enter your 1st number : ");
    scanf("%d",&largest);
    printf("Enter 2nd number : ");
    scanf("%d",&second_largest);
    if(second_largest>largest)
    {
        int temp = largest;
        largest = second_largest;
        second_largest = temp;
    }
    for (int num, i =3;i<=n;i++)
{
    printf("Enter your %drd number :",i);
    scanf("%d",&num);
    if (num>largest)
    {  
        
       second_largest= largest;
       largest=num;
    }
    else if (num>second_largest && num!= largest)
    {   
        second_largest=num;
    }
}
printf("%d",second_largest);
return 0;
}