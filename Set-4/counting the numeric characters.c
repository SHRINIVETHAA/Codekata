#include<stdio.h>
#include<string.h>
int main()
{
    char string[10];
    int length,i,count=0;
    scanf("%s",string);
    length=strlen(string);
    for(i=0;i<length;i++)
    {
        if(string[i]>='0'&&string[i]<='9')
        count++;
    }
    printf("%d",count);
    return 0;
}
