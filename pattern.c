#include <stdio.h>
int main()
{
    int n;
    int a=1;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(a<=n)
            {
                printf("%d\t",a++);
            }
            
        }
        printf("\n");
    }
	
	return 0;
}
