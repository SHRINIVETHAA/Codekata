#include<stdio.h>
int main()
{
    int n,k,m,count=0,i;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==i)
        count++;
    }
    if(count>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
    
}
