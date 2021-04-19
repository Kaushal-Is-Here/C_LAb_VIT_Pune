//              8.Write a program to display the multiplication table of given no.
//                                    ^^^^^^ Table ^^^^^^

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
  printf("Table of %d is  \n",n);

    for (i = 1; i <= 10; ++i)
 {
    printf("%d * %d = %d \n", n, i, n * i);
 }
    return 0;
}