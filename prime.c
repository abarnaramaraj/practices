#include <stdio.h>
void prime(int n) 
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
	if(n%i==0)
	{
	    count++;
	}
	}
	if(count==2)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
}
void main()
{
    int n;
	scanf("%d",&n);
	prime(n);
}
