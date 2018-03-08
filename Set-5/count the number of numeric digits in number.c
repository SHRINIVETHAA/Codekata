#include<stdio.h>
int main()
{
    int n,temp,factor=1,num,count=0;
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        temp=temp/10;
        factor=factor*10;
        count++;
    }
    while(factor>1)
    {
        factor=factor/10;
        num=n/factor;
        printf("%d ",count);
        break;
        n=n%factor;
    }
    return 0;
}
