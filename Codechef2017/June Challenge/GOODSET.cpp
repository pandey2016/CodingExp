#include<stdio.h>

int main()
{
	int T;
	scanf("%d\n",&T);
	while(T>0)
	{
		long n,i,x;
		scanf("%d",&n);
		x=1;
			
		for(i=1;i<=n;i++)
			{
				
				printf("%ld\n",x);
				x=x+2;
			}
		
		T--;
	}
	return 0;
}
