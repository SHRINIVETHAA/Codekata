#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int hr1,min1,hr2,min2,s,s1;
    scanf("%d %d",&hr1,&min1);
    scanf("%d %d",&hr2,&min2);
    s=abs(hr1-hr2);
    s1=abs(min1-min2);
    printf("%d ",s);
    printf("%d",s1);
    return 0;
}
