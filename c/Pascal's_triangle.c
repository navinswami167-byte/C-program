#include<stdio.h>
int fac(int a)
{  int i,multi=1 ;
    for(i=2;i<=a;i++)
    {
        multi*=i;
    
    } return multi;
}
int main()
{   int n,row,col,sub,ncr;
    printf("Enter the number of row :");
    scanf("%d",&n);
    for(row = 0 ; row<n;row++)
    {
        for(col=0;col<=row;col++)
        {
            sub = row - col ;
            ncr = fac(row)/(fac(col)*fac(sub));
            printf("%d",ncr);
        } printf("\n");
    }
      












































}