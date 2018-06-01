#include<stdio.h>
int main()
{
    int n,i,sum=0,avg=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&i);
        sum=sum+i;
    }
    avg=sum/n;
    printf("%d",avg);
    return 0;
}
