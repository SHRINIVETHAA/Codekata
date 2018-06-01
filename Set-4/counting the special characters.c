#include<stdio.h>
#include<string.h>
    int main()
   { int i,n,length,count=0,flag=0;
   char s[10];
    scanf("%s",s);
    length=strlen(s);
    for(i=0;i<length;i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A'&&s[i]<='Z') || (s[i]>='0'&&s[i]<='9'))
    count++;
    else
    flag++;
        
    }
    printf("%d",flag);
    
}
