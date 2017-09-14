#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		long long N,b,x,y,z,w;
		scanf("%lld%lld",&N,&b);
		x=N/b;
		if(x%2!=0)
		{
			y=(x/2)+1;
		}
		else
		{
			y=x/2;
		}
		//printf("%lld\n",x);
		//printf("%lld\n",y);
		z=N-(b*y);
		//printf("%lld\n",z);
		w=z*y;
		printf("%lld\n",w);
		
		
		
		t--;
	}
	return 0;
}
