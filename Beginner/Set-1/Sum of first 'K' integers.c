#include<stdio.h>
int main()
{
    int sum=0,n,i,k,a[10];
    printf("Enter the value of n:\n");
    scanf("%d",&n);
   printf("Enter the value of k:\n");
   scanf("%d",&k);
   printf("Enter the array elements:\n");
   for(i=1;i<=n;i++)
 {
     scanf("%d",&a[i]);
}
   for(i=1;i<=k;i++)
   {
       sum=sum+a[i];
   }
   printf("%d",sum);
}
