//           10.Write a program in C to make such a pattern like right angle triangle with number increased by 1.
//                               ^^^^^^ Right Angle Number Pattern ^^^^^^^


#include <stdio.h>

int main() {
   int rows, i, j, number = 1;

   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   for (i = 1; i <= rows; i++)
    {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }
   return 0;
}