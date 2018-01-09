#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char string[10]="hello";
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%s\n",string);
    }
    return 0;
}
