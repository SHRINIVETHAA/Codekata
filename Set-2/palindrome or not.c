#include<stdio.h>
int main()
{
    int n,temp,rev=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rev=rev*10;
        rev=rev+temp%10;
        temp=temp/10;
    }
    if(n==rev)
    {
        printf("yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
