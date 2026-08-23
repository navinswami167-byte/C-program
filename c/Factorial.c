#include<stdio.h>
int main()
{ int i,num,fac;
    printf("Enter number for factorial :");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Enetr positive number");
    }
else if (num == 0)
{
    printf("1");
}
else
{ for(fac=1,i=1;i<=num;i++)
 {  
    fac*=i;
 }

printf("%d",fac);}

}