#include<stdio.h>
int main()
{
    int n;
    printf("enter any number:\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is positive",n);
    }
    else
    {
        printf("%d is negative",n);
    }
    return 0;
}
