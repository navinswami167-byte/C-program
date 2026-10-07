#include<stdio.h>
int fac(int num)
{ int i,j;
    for(i=2;i<=num;i++)
    {   int count = 2;
        if(num%i == 0)
        {
           for(j=1;j<i;j++)
           {
            if(i%j==0)
            {
                count--;
            }
           }
           if(count == 1)
           {
            printf("%d\t",i);
           }
        }
    }

}
int main()
{
    int num;
    printf("Enter Your Number :");
    scanf("%d",&num);
    fac(num);

}