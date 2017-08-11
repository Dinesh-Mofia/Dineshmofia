#include <stdio.h>

int main()
{
    int y;

    printf("Enter a y: ");
    scanf("%d",&y);

    if(y%4 == 0)
    {
        if( y%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( y%400 == 0)
                printf("%d is a leap year.", y);
            else
                printf("%d is not a leap year.", y);
        }
        else
            printf("%d is a leap year.", y );
    }
    else
        printf("%d is not a leap year.", y);
    
    return 0;
}
