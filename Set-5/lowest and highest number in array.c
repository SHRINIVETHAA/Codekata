#include<stdio.h>
int main()
{
    int n,a[10],i,l,h;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   l=a[0];
   h=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]<l)
       l=a[i];
       else if(a[i]>h)
       h=a[i];
   }
    printf("%d ",l);
     printf("%d",h);
    return 0;
    
}
