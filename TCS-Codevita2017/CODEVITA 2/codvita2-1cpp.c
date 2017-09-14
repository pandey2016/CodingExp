#include<stdio.h>
int main()
{
	int n;
	double p;
	scanf("%d%lf",&n,&p);
	int x,count=0,y;
	for(x=1;x<=n;x++)
	{
		for(y=1;y<x;y++)
		{
			if(y*(y-1)-(p*x*(x-1))==0)
			{
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
	
}
