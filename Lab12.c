//                       12.Write a program to find the factorial of a given no.
//                                ^^^^^ Factorial Of Number ^^^^^

#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    

 printf("Enter a number: ");    
 scanf("%d",&number); 

  for(i=1;i<=number;i++)
    {    
      fact=fact*i;    
    }    

  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   