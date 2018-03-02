#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    scanf("%[^\n]s",s);
    if(printf(s))
    return 0;
}
