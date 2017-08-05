#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    printf("Enter a Charac: ");
    scanf("%c", &c);
    if(c == 'a' || c == 'e' || c =='i' || c=='o' || c=='u' || c=='A'  || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("%c is a Vow\n", c);
    }
    else
    {
        printf("%c is a Conso\n", c);
    }
    getch();
    return 0;
