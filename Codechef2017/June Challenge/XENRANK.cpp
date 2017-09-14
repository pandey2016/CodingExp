#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T>0)
	{
		long long int u,v,i,x=0,z=0,y=0,w=0;
		scanf("%lld%lldu",&u,&v);
		
		x= u+v;
		y=(x)*(x+1)/2;
		
		
	
		z=x+1-v;
		
	
		w=z+y;
		
		printf("%lld\n",w);
		T--;
		
	}
}
