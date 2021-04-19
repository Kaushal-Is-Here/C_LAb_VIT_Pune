//             16.Write a program in C to print individual characters of string in reverse order
//                              ^^^^ Reverse Order ^^^^


#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str[100];
  	int i, len;
 
  	printf("\n Enter Word You have to reverse  :  ");
  	gets(Str);
  	
  	len = strlen(Str);
  	
 	printf("\n Word after Reversing : "); 
  	for (i = len - 1; i >= 0; i--)
  	{
  		printf("%c", Str[i]);
  	}

  	return 0;
}
