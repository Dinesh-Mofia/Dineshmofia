#include <stdio.h>
int main()
{
    double m1, m2, m3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &m1, &m2, &m3);

    if( m1>=m2 && m1>=m3 )
        printf("%.2f is the largest number.", m1);

    if( m2>=m1 && m2>=m3 )
        printf("%.2f is the largest number.", n2);

    if( m3>=m1 && m3>=m2 )
        printf("%.2f is the largest number.", m3);

    return 0;
}
