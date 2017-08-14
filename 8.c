#include <stdio.h>
int main()
{
    int k, i, s = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&k);

    for(i=1; i <= k; ++i)
    {
        s += i;   // sum = sum+i;
    }

    printf("Sum = %d",s);

    return 0;
}

