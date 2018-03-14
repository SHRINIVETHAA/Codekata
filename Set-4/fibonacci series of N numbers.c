#include<stdio.h>
int main()
{
	int first=1,second=1,next,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
    printf("%d ",first);
		next=first+second;
		first=second;
		second=next;
	}
	return 0;
	
}
