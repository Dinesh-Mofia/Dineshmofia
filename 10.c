#include <stdio.h>
int main()
{
    long long k;
    int c = 0;

    printf("Enter an integer: ");
    scanf("%lld", &k);

    while(k != 0)
    {
        // n = n/10
        k /= 10;
        ++c;
    }

    printf("Number of digits: %d", c);
}


