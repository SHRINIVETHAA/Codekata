#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is even",n);
    }
    else
    {
        printf("%d is odd");
    }
    return 0;
}
