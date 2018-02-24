#include<stdio.h>
#include<string.h>
int main()
{
    char string[10];
    int length,i,count=0;
    scanf("%[^\n]s",string);
    length=strlen(string);
    for(i=0;i<length;i++)
   { if(string[i]!=' ')
    {
        count++;
    }
   }
   printf("%d",count);
   return 0;
}
