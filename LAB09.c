//            Write a program in C to display the pattern like right angle triangle using an asterisk
//                              ^^^^^^ Righrt Angle Star Pattern ^^^^^^     

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the values of natural height of triangle : \n");

   scanf("%d ", &rows);
   
   for (i = 1; i <= rows ; ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("* ");
      }
       printf("\n");
   }
   return 0;
}