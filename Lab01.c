//       1.Write a C program to read roll no, and marks of three subjects and calculate the total, percentage and division.
//                               ^^^^ Allotment of Div ^^^^

#include<stdio.h>
int main()
{
	int science; 
	int math;
	int english;

	printf("Enter Subject marks Science : ");
      scanf("%d", &science);

      printf("Enter Subject marks Math : ");
      scanf("%d", &math);

      printf("Enter Subject marks English : ");
      scanf("%d", &english);

	float percentage;

	percentage= (float) (science + math + english)*100/300;

	printf("Percentage : %.2f\n",percentage);

	if(percentage>=60)
	{
		printf("A division\n");
	}
	else if(percentage>=50)
	{
		printf("B division");
	}
	else if(percentage>=40)
	{
		printf("C division");
	}
	else
	{
		printf("Not Eligible  \n");
	}
	
	return 0;
}