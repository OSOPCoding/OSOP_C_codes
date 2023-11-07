#include<stdio.h>

int main()
{
   int i ;

   // Loop to iterate from 1 to 10
   for(i = 1; i <= 10; i++)
   {
       printf("osop coding\n"); 

       // Check if 'i' is less than 5
       if(i < 5)
          continue; // Skip the remaining code in this iteration and move to the next iteration

        printf("%d \n", i); 
   }
   return 0;
}
