#include<stdio.h>
int main()
{
    int h,m,h1,m1,h2,m2;
    scanf("%d %d",&h,&m);
    scanf("%d %d",&h1,&m1);
    h2=abs(h-h1);
    m2=abs(m-m1);
    printf("%d %d",h2,m2);
    return 0;
}
