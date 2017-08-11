#include <stdio.h>
int main()
{
    int s, i, ran;

    printf("Enter an integer: ");
    scanf("%d",&s);

    printf("Enter the ran: ");
    scanf("%d", &ran);

    for(i=1; i <= ran; ++i)
    {
        printf("%d * %d = %d \n", s, i, s*i);
    }

    return 0;
}
