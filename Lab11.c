//                  11. Find the odd & even numbers from the given series of elements
//                             ^^^^^^^ SHowing Odd Even In Series ^^^^^^^

#include<stdio.h>

int main()
{
    int arr[100], size, odd_count = 0, even_count = 0, i;

    printf("Enter array size : \n");
    scanf("%d",&size);

    printf("Enter array elements : \n");

    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);

    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 1)
            odd_count++;
        else
            even_count++;
    }
    printf("Odd number count = %d\n ",odd_count);

    printf("Even number count = %d\n",even_count);
    
    return 0;
}