#include<stdio.h>
int main()
{
    int l,w,h,tsa,a,tsa1;
    scanf("%d %d %d",&l,&w,&h);
    tsa=(l*w+w*h+h*l);
    tsa1=2*tsa;
    a=(l*w*h);
    printf("%d ",tsa1);
    printf("%d",a);
    return 0;
}
