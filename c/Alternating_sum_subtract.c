#include<stdio.h>
int main()
{
 int num,i,sum=0;
      printf("Enter your number :");
      scanf("%d",&num);
      for(i=1;i<=num;i++)
      {  if(i%2!=0)
        {  sum+=i;
        }
        else
        { sum-=i;
        }
      }

printf("%d",sum);
return 0;
}