//                7. Write a program to check whether a given number is prime or not.
//                           ^^^^^^^^ Number is Prime or Not.^^^^^^^^

#include<stdio.h>  
int main(){    
int n,i,m=0,flag=0;    
printf("Enter the number to check prime:");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("Number is not prime");    
flag=1;    
break;    
}    
}    
if(flag==0 && n!=1)    
printf("%d Number is Prime Number", n); 
else 
printf("1 is neither prime nor composite");    
return 0;  
}  


