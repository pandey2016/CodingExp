#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T>0)
	{
		int n,m,u,v,i,x=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++)
		{
			
			scanf("%d%d",&u,&v);
		}
		
		x=n-2*m;
		if(x%2==0)
		{
			printf("yes\n");
			
		}
		else
		{
			printf("no\n");
		}
		
		T--;
		
	}
	return 0;
}
