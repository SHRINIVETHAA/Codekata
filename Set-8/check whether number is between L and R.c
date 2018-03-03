#include<stdio.h>
int main()
{
    int r,l,n,i,count=0;
    scanf("%d",&l);
    scanf("%d",&r);
    scanf("%d",&n);
    for(i=l;i<r;i++)
    {
        if(n>=l && n<=r)
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
