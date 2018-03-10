#include<stdio.h>
int main()
{
    int n,temp,num,sum,min,max;
    scanf("%d",&min);
    scanf("%d",&max);
    for(num=min;num<=max;num++)
    {
        temp=num;
         sum=0;
    while(temp!=0)
    {
        n=temp%10;
        sum=sum+n*n*n;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d ",num);
    }
    }
    return 0;
}
