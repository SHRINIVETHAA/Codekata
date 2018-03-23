#include<stdio.h>
int main()
{
    int a,b,c,result,result1;
    scanf("%d %d %d",&a,&b,&c);
    result=a*b;
    result1=result%c;
    printf("%d",result1);
    return 0;
}
