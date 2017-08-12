 #include<stdio.h>
#include<conio.h>
int main()
{
 int c=0,i;
 int cc=0;
 char str[20];
 printf("Enter string : ");
 gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
   cc++;
   if(str[i]==' ')
      c++;
 }
 printf("\nNumber of characters in string : %d",cc);
 printf("\nNumber of words in string : % d",c+1);
 getch();
 return 0;
}
