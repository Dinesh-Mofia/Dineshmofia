 #include<stdio.h>
   int main(){
                 int n, n1, n2, k, r;
                 printf("\n Enter any two Numbers : ");
                 scanf("%d %d",&n1,&n2);
                 printf("\n\n The Prime Numbers between the given Two Intervals are . . . \n ");
                 for(n=n1; n<=n2; ++n)
                 {
                  r=0;
                  for(k=2;k<=n/2;k++){
                  if((n % k) == 0){
                  r++;
                  break;
                  }
                  }
                  if(r==0)
                  printf("\n %d ", n);
                  }
                  getch();
   return 0;
   }
