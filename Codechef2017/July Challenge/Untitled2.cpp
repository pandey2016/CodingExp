#include<stdio.h>
int f(int y);
int main()
{
	long long n;
	scanf("%lld",&n);
	int i,x,sum,l[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&l[i])	;	
	}
	
	
	sum=0;
	for(x=n;x>1;x--)
	{
		sum=(sum+f(n));
	}
	
	printf("%lld",sum);
	return 0;
	
}
int f(int y)
{
		int x,sum=0;
	if(y==2)
	{
		sum=2;
	}
	if(y==3)
	{
		sum=19;
	}

	if(y>3)
	{
		sum=0;
	
	for(x=y;x>1;x--)
	{
		sum=sum+(y*(x-1)*(x-1));
	}
	
	}
return sum;
}
