#include<stdio.h>

int main() {
   int n,a,d,sum=0,i;
   scanf("%d",&n);
   scanf("%d",&a);
   scanf("%d",&d);
   for(i=1;i<=n;i++)
   {
      sum=sum+i; 
   }
   printf("%d",sum);
   return 0;
}
