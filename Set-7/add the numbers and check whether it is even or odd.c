#include<stdio.h>
int main()
{
    int n,m,sum=0;
    scanf("%d",&n);
    scanf("%d",&m);
    sum=n+m;
    if(sum%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
