//                  5. Write a C program to accept the height of a person in centimeterand categorize the person according to their height.
//                                    ***** Height of a Person *****

#include <stdio.h>
void main()
{
    float Height;
 
    printf("Input the height of the person (in centimetres) :");
    scanf("%f", &Height);

    if (Height < 150.0)
        printf("The person is Dwarf. \n");

    else if ((Height >= 150.0) && (Height < 165.0))
        printf("The person is  average heighted. \n");

    else if ((Height >= 165.0) && (Height <= 195.0))
        printf("The person is taller. \n");  
        
    else
        printf("Abnormal height.\n");
}
