//                                     spectial pattern

#include <stdio.h>

int main()
{
    int i, j, n;
     scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            
            printf("%d",j+i-1);
        }
        j=j+1;
        printf("\n");
    }

    return 0;
}