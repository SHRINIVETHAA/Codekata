#include<stdio.h>
int main()
{
    int a,b,x,y,lcm,temp;
    scanf("%d",&x);
    scanf("%d",&y);
    a=x;
    b=y;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    lcm=x*y/a;
    printf("%d",lcm);
    return 0;
}
