//               2. Write a C program to check whether a triangle is Equilateral,Isosceles or Scalene.

//                               ***** Equilateral,Isosceles or Scalene.*****  

#include<stdio.h>
int main(){

   int side1, side2, side3;

   printf("Enter 1st side of triangle:");
   scanf("%d",&side1);

   printf("Enter 2nd side of triangle:");
   scanf("%d",&side2);

   printf("Enter 3rd side of triangle:");
   scanf("%d",&side3);

   if(side1 == side2 && side2 == side3)
      printf("The Given Triangle is equilateral\n");

   else if(side1 == side2 || side2 == side3 || side3 == side1)
      printf("The given Triangle is isosceles\n");
      
   else
      printf("The given Triangle is scalene\n");
   return 0;
}