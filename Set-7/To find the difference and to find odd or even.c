#include<stdio.h>
int main()
{
    int m,n,sub=0;
    scanf("%d",&m);
    scanf("%d",&n);
    sub=m-n;
    if(sub%2==0)
    {
       printf("even"); 
    }
    else
    {
        printf("odd");
    }
    return 0;
}
