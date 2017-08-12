#include<iostream.h>
#include<conio.h>
void main()
{
int n1,n2,m,i;
clrscr();
printf("Enter the two positive numbers");
scanf("%d%d",&n1,&n2);
min=(num1>num2)?n1:n2;
for(i=m;i>=1;i--)
{
if(n1%i==0&&n2%i==0)
printf(" HCF of %d and %d is %d",n1,n2,i);
break;
}
}
getch();
}
