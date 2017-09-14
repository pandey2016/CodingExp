#include<stdio.h>
int main()
{
	int T;
	scanf("%d\n",&T);
	while(T>0)
	{
		long n;
		scanf("%ld",&n);
		int a[n],i,y=0,x=0;
		for(i=1;i<=n;i++)
		
		{
			scanf("%d",&a[i]);
		}
		
		for(i=1;i<=n;i++)
		{
			
			
			if(y<a[i])
			{
			y=a[i];
			}
					
		}
		x=n-y;
		printf("%d\n",x);
		
		T--;
	}
	return 0;
}
