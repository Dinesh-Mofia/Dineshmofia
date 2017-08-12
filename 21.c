#include<stdio.h>
 
int main()
{
   int n, f = 0, s = 1, nex, c;
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         nex = c;
      else
      {
         nex = f + s;
         f = s;
         s = nex;
      }
      printf("%d\n",nex);
   }
 
   return 0;
}
