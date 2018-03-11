#include<stdio.h>
int main()
{
    int n,i,count,min,max;
    scanf("%d %d",&min,&max);
    for(n=min;n<max;n++)
    {
        count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        printf("%d ",n);
    }
    }
    return 0;
}
