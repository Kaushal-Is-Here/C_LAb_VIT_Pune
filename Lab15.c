//          15.Write a program in C to separate the individual characters from a string & display the charcters.
//                               ^^^^^ separate the individual characters ^^^^^

#include <stdio.h>
#include <math.h>

int main()
{
    char str[100];
    int i = 0;
        
    printf("\n Please Enter any String  :  ");
    scanf("%s", str);
        
    while (str[i] != '\0')
    {
        printf("The Character at %d Index Position = %c \n", i, str[i]);
        i++;
    }
    return 0;
}