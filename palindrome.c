#include <stdio.h>

int main()
{
	int n,rem=0,rev;
	scanf("%d",&n);
    while(n!=0)
	{
	    rev=n%10;
	    rem=rem*10+rev;
	    n=n/10;
	}
	if(n==rem)
	{
	  printf("yes");
	}
	else
	{
	  printf("no");
	}
	return 0;
}
