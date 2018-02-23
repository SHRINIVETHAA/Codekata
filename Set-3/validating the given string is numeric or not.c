#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int length,i;
    scanf("%s",s);
    length=strlen(s);
    for(i=0;i<length;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
    { printf("string is numeric");
    break;
    }
    else
    {
        printf("string is not numeric");
        break;
    }
    }
    return 0;
}
