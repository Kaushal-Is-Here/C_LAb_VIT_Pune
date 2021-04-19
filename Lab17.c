//             17.Write a c program to sort the elements of the array by using bubble sort technique
//                            ^^^^^^^ Sorting ^^^^^^^

#include <stdio.h>
#include <string.h>
int main()
{

int array[100], n, i, j, swap; 
printf("Enter number of elements ");
scanf("%d", &n); 

printf("Enter %d Numbers:n", n); 
for(i = 0; i < n; i++)
scanf("%d", &array[i]); 
for(i = 0 ; i < n - 1; i++)
{
for(j = 0 ; j < n-i-1; j++)
{
if(array[j] > array[j+1]) 
{
swap=array[j];
array[j]=array[j+1];
array[j+1]=swap;
}
}
} 
printf("Sorted Numbers :n"); 
for(i = 0; i < n; i++)
printf("%dn", array[i]);
return 0;
}
