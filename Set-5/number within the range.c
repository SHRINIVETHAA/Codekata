#include<stdio.h>
int main()
{ int n,i,count=0;
  scanf("%d",&n);
    for(i=1;i<10;i++)
    {
        if(n==i)
        count++;
    }
    if(count>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
