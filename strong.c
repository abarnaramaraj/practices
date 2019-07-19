#include<stdio.h>
void strong(int n)
{   
    int temp,sum=0,count,f,r;
    temp=n;
    while(n)
    { 
        count=1;f=1;
        r=n%10;
       while(count<=r)
       {
           f=f*count;
           count++;
       }
       sum=sum+f;
       n=n/10;
    }
    if(temp==sum)
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
    strong(n);
}
