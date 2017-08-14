#include <stdio.h>
int main()
{
    char c;
    printf("Enter the letter: ");
    scanf("%c",&c);
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        printf("%c is an alpha",c);
    else
        printf("%c is not an alpha",c);
    }
    return 0;
}
