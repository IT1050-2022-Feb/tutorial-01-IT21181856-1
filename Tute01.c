/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
   int x;
   float marks,tot;
   for(x=0;x<2;x++)
   {
      printf("enter subject %d marks: ",x+1);
      scanf("%f",&marks)
        tot=tot+marks;
   }
   printf("\nAverage = %.2f" , tot/2.0);
  
  return 0;
}

