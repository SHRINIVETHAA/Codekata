#include<stdio.h>
int main()
{
    int n,i,count=0,temp,rev;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==1)
   { 
     {
        temp=n;
     }
    while(temp!=0)
    {
        rev=rev*10;
        rev=rev+temp%10;
        temp=temp/10;
    }
       
   }
    if(temp=rev)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
