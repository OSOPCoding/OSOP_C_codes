#include<stdio.h>

int main()
{
   int i ;

   // Loop to iterate from 1 to 10
   for(i = 1; i <= 10; i++)
   {
       printf("%d \n", i); 

       // Check if 'i' is greater than 4
       if(i > 4)
          break; // Exit the loop if 'i' is greater than 4
   }

   return 0;
}
