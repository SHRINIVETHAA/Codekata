#include<stdio.h>
int main()
{
    int a,b,x,y,gcd,temp;
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
    gcd=a;
    printf("%d",gcd);
    return 0;
}
