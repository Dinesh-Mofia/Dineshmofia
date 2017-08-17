#include <stdio.h>
void main()
{
    char b;
    printf("Enter the letter: ");
    scanf("%c",&b);
    if( (b>='a' && b<='z') || (b>='A' && b<='Z'))
    {
        printf("%c is an alph",b);
    else
        printf("%c is not an alph",b);
    }
}
