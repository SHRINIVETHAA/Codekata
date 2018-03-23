#include<stdio.h>
#include<string.h>
int main()
{
    int length,i,flag=0;
    char s[10];
    scanf("%s",s);
    length=strlen(s);
    for(i=0;i<=length;i++)
    {
        if(s[i]==s[length-i-1])
        {
            flag++;
        }
    }
    if(flag>0)
{
    printf("yes");
}
else
{
    printf("no");
}
return 0;
}
