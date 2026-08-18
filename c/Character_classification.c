#include<Stdio.h>
int main()
{ char character;
    printf("Enetr a charater :");
    scanf("%c",&character);
    if (character>= 'A' && character<= 'Z' )
    {
        printf("Your character is Upper case");
    }
   else if (character>='0' && character<='9' )
   {
    printf("Your character is number");

   }
   else if (character>='a' && character<='z')
   {
    printf("Your character is lower letter ");
   }
  else
  {
    printf("Your  character is special ");
  }







}