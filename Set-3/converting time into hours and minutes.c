#include<stdio.h>
int main()
{
    int m,h,t;
    scanf("%d",&t);
    if(t<60)
    {
        printf("%d %d",0,t);
    }
    else if(t>60)
    {
        h=t/60;
        m=t%60;
        printf("%d %d",h,m);
    }
    return 0;
}
