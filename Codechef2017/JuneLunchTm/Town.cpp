#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d\n",&T);
	while(T>0)
	{
		long long a,b,n,x;
		scanf("%lld%lld%lld\n",&a,&b,&n);
		if(n%2==0)
		{
			if(a>b)
			{
				x=(a/b);
			}
			else
			{
				x=(b/a);
			}
		}
		if(n%2!=0)
		{
			if(a*2>b)
			{
				x=(a*2)/b;
			}
			else
			{
				x=b/(a*2);
			}
		}
		printf("%lld\n",x);
		
		T--;
	}
	

	return 0;
	
}
