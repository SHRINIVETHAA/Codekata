#include<stdio.h>
int main()
{
    int num,n;
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d",num);
    }
    if(num%2!=0)
    {
      num=num-1;
      printf("%d",num);
    }
    return 0;
}
