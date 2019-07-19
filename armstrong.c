#include <stdio.h>
void armstrong(int n) 
{
	int rem,sum=0,temp;
	temp=n;
	while(n!=0)
	{
	    rem=n%10;
	    n=n/10;
	    sum=sum+(rem*rem*rem);
	}
	if(sum==temp)
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
    armstrong(n);
}
