//                         13 .write a program to reverse no in C
//                            ^^^^^^^ Reverse ^^^^^^^


#include <stdio.h>
int main() {
    int n, Final = 0, remainder;

    printf("Enter a Number : ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        Final = Final * 10 + remainder;
        n /= 10;
    }
    printf("Reversed Number = %d", Final);
    return 0;
}