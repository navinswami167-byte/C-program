#include<stdio.h>
int main()
{   int i,j,row,col;    
    printf("Enter your number of row :");
    scanf("%d",&row);
    printf("Enter number of column :");
    scanf("%d",&col);
    for(i=1;i<=col;i++)
    {
      for(j=1;j<=row;j++)
      {  if(i==1 || i==col || j==1 || j==row)
          {
            printf("*");
          }
           else
           {
            printf(" ");
           }






      }
   printf("\n"); }
}