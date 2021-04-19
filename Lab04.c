 //            4. Write a C program to accept two integers and check whether they are equal or not.
//                              ^^^^^ Number Equal Or Not ^^^^^

#include <stdio.h>
void main()
{
    int Number1,Number2;
 
    printf("Enter the values for Number1 : \n");

    scanf("%d %d", &Number1);

    printf("Enter the values for Number2 : \n");

    scanf("%d %d", &Number2);

    if (Number1 == Number2)
        printf("Number1 and Number2 are equal\n");

    else
    
        printf("Number1 and Number2 are not equal\n");

}