#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int length,i,flag=0;
    scanf("%s",s);
    length=strlen(s);
    for(i=0;i<length;i++)
    {
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
        flag++;
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
