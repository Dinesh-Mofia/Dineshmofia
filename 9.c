#include<stdio.h>
int main()
{
  int Num, i, S = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &Num);
  
  for(i = 1; i <= Num; i++)
  {
     S = S + i;
  }
  
  printf("Sum of Natural Numbers = %d", S);
  return 0;
}
