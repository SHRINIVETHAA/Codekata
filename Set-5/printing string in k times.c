#include<stdio.h>
#include<string.h>
int main()
{
    char string[10];
    int k,i;
    scanf("%s %d",string,&k);
    for(i=1;i<=k;i++)
    {
        printf("%s\n",string);
    }
    return 0;
}
